#include <stdio.h>

void produitVectoriel(int a[], int b[], int result[]) {
    result[0] = a[1] * b[2] - a[2] * b[1];
    result[1] = a[2] * b[0] - a[0] * b[2];
    result[2] = a[0] * b[1] - a[1] * b[0];
}

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int result[3];

    produitVectoriel(a, b, result);

    printf("Le produit vectoriel est: (%d, %d, %d)\n", result[0], result[1], result[2]);

    return 0;
}
