#include <stdio.h>
#include <stdlib.h>

void classement_du_tableau(int n,float *Tab)
{
    float temp;
    debut:
    for(int i=0; i<n; i++)
    {
        if(Tab[i]>Tab[i+1])
        {
            temp=Tab[i];
            Tab[i]=Tab[i+1];
            Tab[i+1]=temp;
            goto debut;
        }
    }
}

int main ()
{
    int n, m;
    printf("Calcul de la mediane d'un tableau\n");
    printf("Etrez le nombre le nombre d'element du tableau: ");
    scanf("%d", &n);
    float Tab[n];
    for (int i=1; i<=n; i++)
    {
        printf("Entre l'element %d: ",i);
        scanf("%f", &Tab[i]);
    }
    classement_du_tableau(n,Tab);
    float mediane;
    if( n%2 == 1)
    {
        m = (n+1)/2;
        mediane = Tab[m];
    }else
    {
        m=n/2;
        mediane = (Tab[m]+Tab[m+1])/2;
    }
    printf("La mediane de ce tableau est: %.1f", mediane);
    return 0;
}