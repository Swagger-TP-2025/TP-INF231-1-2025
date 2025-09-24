#include <stdio.h>

void inverser(int tab[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = tab[i];
        tab[i] = tab[n - i - 1];
        tab[n - i - 1] = temp;
    }
}

int main() {
    int n;
    printf("Veillez emtrer la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    for(int i = 0; i < n; i++) {
        printf("Entrer l'element %d : ", i+1);
        scanf("%d", &tab[i]);
    }

    inverser(tab, n);

    printf("Le tableau inversé est: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
