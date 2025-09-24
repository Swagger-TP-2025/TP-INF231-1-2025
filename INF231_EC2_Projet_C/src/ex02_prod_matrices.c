#include<stdio.h>

int main(){
    int a, b, c, d; // la matrice A
    int e, f, g, h; // la matrice B
    int c11, c12, c21, c22; // la matrice produit C

    printf("Element de la matrice A \n");

    printf("Entrer le premier element : ");
    scanf("%d", &a);
     printf("Entrer le deuxieme element : ");
    scanf("%d", &b);
     printf("Entrer le troisieme element : ");
    scanf("%d", &c);
     printf("Entrer le quqtrieme element : ");
    scanf("%d", &d);

    printf("Element de la matrice B \n");

    printf("Entrer le premier element : ");
    scanf("%d", &e);
     printf("Entrer le deuxieme element : ");
    scanf("%d", &f);
     printf("Entrer le troisieme element : ");
    scanf("%d", &g);
     printf("Entrer le quqtrieme element : ");
    scanf("%d", &h);

    c11 = a * e + b * g;
    c12 = a * f + b * h;
    c21 = c * e + d * g;
    c22 = c * f + d * h;

    printf(" Le produit est : \n%d\t %d\n %d\t %d", c11, c12, c21, c22);

    return 0;

}