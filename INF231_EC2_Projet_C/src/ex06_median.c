#include <stdio.h>
#include <stdlib.h>

int comparer(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int mediane(int tab[], int n) {
    qsort(tab, n, sizeof(int), comparer); // Trie le tableau
    if (n % 2 == 1) {
        return tab[n / 2]; // Si le nombre d'éléments est impair, retourne l'élément du milieu
    } else {
        return (tab[n / 2 - 1] + tab[n / 2]) / 2; // Si pair, retourne la moyenne des deux éléments du milieu
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
    
    printf("Le médian est %d.\n", mediane(tab, n));

    return 0;
}

