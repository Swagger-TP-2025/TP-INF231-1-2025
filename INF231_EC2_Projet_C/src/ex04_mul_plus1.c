#include <stdio.h>

int multiplication(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a; // On additionne 'a' à 'result', 'b' fois
    }
    return result;
}

int main() {
    int a, b;

    printf("Entrez a: ");
    scanf("%d", &a);
    printf("Entrez b: ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        printf("Le produit de %d et %d est %d.\n", a, b, multiplication(a, b));
    } else {
        printf("Les deux nombres doivent être supérieurs à 0.\n");
    }

    return 0;
}
