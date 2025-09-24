# Projet C – INF 231_EC2 : Structure de Données II

**Enseignant :** PR MeLatagia  
**Objet :** Exercices C (9 items) — matrices, tableaux, recherche, vecteurs.

## Objectifs
- Pratiquer les algorithmes classiques (addition/produit de matrices, recherche).
- Manipuler tableaux/vecteurs et contrôler l’ordre (tri, médiane).
- Renforcer la rigueur de compilation (`-Wall -Wextra`) et la qualité des E/S.

## Contenu
1. Somme de matrices  
2. Produit de matrices  
3. Recherche séquentielle  
4. a×b pour a,b>0 via `+1` répété  
5. Test “tableau trié (croissant)”  
6. Médiane d’un tableau  
7. Inverser un tableau  
8. Produit vectoriel (3D)  
9. Produit vecteur × matrice

## Arborescence
```
.
├── README.md
├── Makefile
├── src/
│   ├── ex01_sum_matrices.c
│   ├── ex02_prod_matrices.c
│   ├── ex03_linear_search.c
│   ├── ex04_mul_plus1.c
│   ├── ex05_is_sorted.c
│   ├── ex06_median.c
│   ├── ex07_reverse_array.c
│   ├── ex08_cross_product.c
│   └── ex09_vector_times_matrix.c
├── doc/    # cahiers de suivi: MatriculePrenom-NOM.md (1 par membre)
└── bin/    # exécutables (générés)
```

## Compilation & exécution
```bash
# Construire tous les exécutables
make

# Lancer un exo (ex02 par ex.)
make run-ex02_prod_matrices
```

## Exemple d’E/S (ex02_prod_matrices.c)
Entrée :
A = [[1,2],[3,4]], B = [[5,6],[7,8]]  
Sortie :
```
Le produit est :
19 22
43 50
```

## Équipe (5 membres)
- [24F2541 – JEAN CARLOS NZOUETCHAM NOUKWE] (chef de projet)
- [Matricule – Prénom NOM]
- [Matricule – Prénom NOM]
- [Matricule – Prénom NOM]
- [Matricule – Prénom NOM]

## Conventions
- Compiler sans warnings : `-Wall -Wextra`
- Noms de fichiers `ex0X_*.c`
- Messages d’invite clairs et lisibles
```)
