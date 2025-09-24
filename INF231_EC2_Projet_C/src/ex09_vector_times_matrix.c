#include <stdio.h>

void produitVecteurMatrices(int v[], int m[3][3], int res[], int n) {
    for (int i = 0; i < n; i++) {
        res[i] = 0;
        for (int j = 0; j < n; j++) {
            res[i] += v[j] * m[j][i];
        }
    }
}

int main() {
    int v[] = {1, 2, 3};
    int m[3][3] = {{4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int res[3];
    int n = 3;

    produitVecteurMatrices(v, m, res, n);

    printf("Le produit du vecteur et de la matrice est: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}
