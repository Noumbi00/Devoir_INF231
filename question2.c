#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("PRODUIT MATRICIELLE\n");
    
    printf("Entrez le nombre de lignes et de colonnes de la  matrice A: ");
    scanf("%d %d", &m, &n);

  
    printf("Entrez le nombre de lignes et de colonnes de la matrice B: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Le produit des matrices n'est pas possible . le nombres de colne de la matrice A doit etre egal au nombre de lignes de la matrices B S.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Entrez les éléments de la matrice A :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entrez les éléments de la matrice B :\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

  
    printf("Produit des matrices C :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
