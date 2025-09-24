#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, n, m;
    
    do{
        printf("entrer le nombre de lignes\n");
        scanf("%d", &n);
        printf("entrer le nombre de colonnes\n");
        scanf("%d", &m);
    }
    while (n>10 && m>10);
    float A[n][m], B[n][m], S[n][m];
    
     // remplissage des matrices
    for(i=0; i<=n-1; i++){
        for(j=0; j<=m-1; j++) {
            printf("Matrice A \n Entrer l' element de la %d eme ligne et %d colonne\n", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }
    for(i=0; i<=n-1; i++){
        for(j=0; j<=m-1; j++) {
            printf("\nMatrice B \n Entrer l' element de la %d eme ligne et %d colonne\n", i+1, j+1);
            scanf("%f", &B[i][j]);
        }
    }
    //Calcul de la somme
    for(i=0; i<=n-1; i++){
        for(j=0; j<=m-1; j++) {
            S[i][j]=A[i][j]+B[i][j];
        }
    }
    // affichage de la somme des matrices
    
    for (i=0; i<=n-1; i++) {
        for(j=0; j<=m-1; j++){
            printf("%f \t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n +\n");
    for (i=0; i<=n-1; i++) {
        for(j=0; j<=m-1; j++){
            printf("%f\t ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n = \n");
    for (i=0; i<=n-1; i++){
        for(j=0; j<=m-1; j++){
            printf("%f\t ", S[i][j]);
        }
        printf("\n");
    }
    return 0;
}