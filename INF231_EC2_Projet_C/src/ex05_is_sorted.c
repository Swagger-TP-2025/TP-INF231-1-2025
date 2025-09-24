#include <stdio.h>

int estTrie(int tab[], int n) {
    for (int i = 1; i < n; i++) {
        if (tab[i-1] > tab[i]) {
            return 0; // Le tableau n'est pas trié
        }
    }
    return 1; // Le tableau est trié
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int n = 5;

    if (estTrie(tab, n)) {
        printf("Le tableau est trié.\n");
    } else {
        printf("Le tableau n'est pas trié.\n");
    }

    return 0;
}
