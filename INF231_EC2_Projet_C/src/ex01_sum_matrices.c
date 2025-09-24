#include <stdio.h>

int main() {
    int n,m;

    // Demande de la taille des marices
    printf("Veillez entrer le nombre de lignes : ");
    scanf("%d", &n);
    printf("Veillez entrer le nombre de colonnes : ");
    scanf("%d", &m);

    int A[n][m], B[n][m], C[n][m];
    

    // Saisie de la premiére matrice 
    printf("Vellez entrer les elements de la premiere matrice A :\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        
    }
    
    printf("La matrice A est : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d", A[i][j]);
        } 
        printf("\n");      
    }
    

    // Saisie de la deuxieme matrice B
    printf("Veillez entrer les elements de la deuxieme matrice B :\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("B[%d][%d] =", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("La matrice B est :\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d", B[i][j]);
        }
        printf("\n");
    }

    // Somme des matrices 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Affichage du resultat
    printf("La somme des matrices est :\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}