#include <stdio.h>

#define LIGNES 3
#define COLONNES 3

int main() {
    int matrice[LIGNES][COLONNES];
    int vecteur[COLONNES];
    int resultat[LIGNES];

    // Saisie de la matrice
    printf("Entrez les elements de la matrice (%dx%d):\n", LIGNES, COLONNES);
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            printf("Matrice[%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }

    // Saisie du vecteur
    printf("\nEntrez les elements du vecteur (%d):\n", COLONNES);
    for (int i = 0; i < COLONNES; i++) {
        printf("Vecteur[%d]: ", i);
        scanf("%d", &vecteur[i]);
    }

    // Calcul du produit matrice-vecteur
    for (int i = 0; i < LIGNES; i++) {
        resultat[i] = 0;
        for (int j = 0; j < COLONNES; j++) {
            resultat[i] += matrice[i][j] * vecteur[j];
        }
    }

    // Affichage du resultat
    printf("\nLe vecteur resultat est :\n");
    for (int i = 0; i < LIGNES; i++) {
        printf("%d\n", resultat[i]);
    }

    return 0;
}
