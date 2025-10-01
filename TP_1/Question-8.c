#include <stdio.h>
#include <stdlib.h>

typedef struct vecteur
{
    float x;
    float y;
    float z;
}vecteur;

vecteur produit_vectoriel(vecteur A, vecteur B)
{
    vecteur C;
    C.x = A.y*B.z-A.z*B.z;
    C.y= -(A.x*B.z-A.z*B.x);
    C.z= A.x*B.y-A.y*B.x;
    return C;
}

int main()
{
    vecteur A, B, C;
    printf("Produit scalaire\n");
    printf("Entrez les coordonnees du premiere vecteur(x;y;z)\n");
    printf("Ax=");
    scanf("%f",&A.x);
    printf("Ay=");
    scanf("%f",&A.y);
    printf("Az=");
    scanf("%f",&A.z);
    printf("Entrez les coordonnees du deuxieme vecteur(x;y;z)\n");
    printf("Bx=");
    scanf("%f",&B.x);
    printf("By=");
    scanf("%f",&B.y);
    printf("Bz=");
    scanf("%f",&B.z);
    C=produit_vectoriel(A,B);
    printf("Le produit scalaire de ces deux vecteur est le vecteur C de coordonnes : (%.2f;%.2f;%.2f)",C.x, C.y, C.z);

    return 0;
}