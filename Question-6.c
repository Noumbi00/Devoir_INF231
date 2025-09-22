#include <stdio.h>
#include <stdlib.h>

// Fonction de comparaison pour qsort()
int comparer_entiers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Fonction pour calculer la médiane
double calculer_mediane(int tableau[], int n) {
    // Trier le tableau par ordre croissant
    qsort(tableau, n, sizeof(int), comparer_entiers);

    // Si le nombre d'éléments est impair
    if (n % 2 != 0) {
        // La médiane est l'élément du milieu
        return (double)tableau[n / 2];
    } 
    // Si le nombre d'éléments est pair
    else {
        // La médiane est la moyenne des deux éléments du milieu
        return (double)(tableau[n / 2 - 1] + tableau[n / 2]) / 2.0;
    }
}

int main() {
    int tableau1[] = {10, 5, 20, 15, 25};
    int n1 = sizeof(tableau1) / sizeof(tableau1[0]);
    double mediane1 = calculer_mediane(tableau1, n1);
    printf("Tableau 1 : ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", tableau1[i]);
    }
    printf("\nMediane : %.2f\n\n", mediane1);

    int tableau2[] = {3, 7, 2, 8, 5, 9};
    int n2 = sizeof(tableau2) / sizeof(tableau2[0]);
    double mediane2 = calculer_mediane(tableau2, n2);
    printf("Tableau 2 : ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", tableau2[i]);
    }
    printf("\nMediane : %.2f\n", mediane2);

    return 0;
}