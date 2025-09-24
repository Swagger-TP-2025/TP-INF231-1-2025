#include<stdio.h>
int main(){
    int n, i, key, found = 0;

    printf("Veillez emtrer la taille du tableau : ");
    scanf("%d", &n);

    int T[n];

    // saisie et lecture des elements du tableau
    for(i = 0; i < n; i++) {
        printf("Entrer l'element %d : ", i+1);
        scanf("%d", &T[i]);
    }

    // saisie et lecture de la valeur a rechercher
    printf("Entrer la valeur recherchée : ");
    scanf("%d", &key);

    // recherche sequentielle
    for(i = 0; i < n; i++) {
        if(key == T[i]) {
            printf("La valeur %d est a la position %d .", key, i+1);
            found = 1; // mémorise si la valeur a été trouvée (1) ou non (0)
            break; // arrete la recherche dés qu'on trouvé une occurrence
        }
    }
    
    if(found == 0) {
        printf("l'element %d n'est pas dans ce tableau", key);
    }
    return 0;
}