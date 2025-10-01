#include <stdio.h>
#include <stdlib.h>

struct Cellule
{
    int val;
    struct Cellule *suiv;
};
typedef struct Cellule* Liste;

struct Celluled
{
    int val;
    struct Celluled *prec;
    struct Celluled *suiv;
};
typedef struct Celluled* Listed;

void affiche(Listed l)
{
    Listed temp = l;
    if(temp==NULL)
    {
        printf("List vide\n");
        return ;
    }
    while(temp != NULL)
    {
        printf("%d->",temp->val);
        temp = temp->suiv;
    }
    printf("\n");
}

Liste Inserttion_L_T(Liste l, int val)
{
    if (l==NULL)
    {
        Liste p= malloc(sizeof(struct Cellule));
        p->val = val;
        p->suiv = l;
        l = p;
        return l; 
    }else
    {
        Liste t=l;
        if (t->val >= val)
        {
            Liste p= malloc(sizeof(struct Cellule));
            p->val = val;
            p->suiv = l;
            l = p;
            return l;
        }
        while (t->suiv != NULL && t->suiv->val < val )
        {
            t = t->suiv;
        }
        if (t->suiv ==NULL )
        {
            Liste p= malloc(sizeof(struct Cellule));
            p->val = val;
            p->suiv = NULL;
            t->suiv = p;
            return l;
        }else
        {
            Liste p= malloc(sizeof(struct Cellule));
            p->val = val;
            p->suiv = t->suiv;
            t->suiv = p;
            return l;   
        }
        
    }

}

Liste Insertion(Liste l, int n)
{
    Liste p;
    int val;
    for(int i =0; i<n; i++)
    {
        printf("Entrez la valeur %d:  ",i+1);
        scanf("%d",&val);
        p = malloc(sizeof(struct Cellule));
        p->val= val;
        p->suiv=l;
        l=p;
    }
    return l;
}

Listed Insertion_LD(Listed ld, int n)
{
    Listed p;
    int val;
    for(int i =0; i<n; i++)
    {
        printf("Entrez la valeur %d:  ",i+1);
        scanf("%d",&val);
        p = malloc(sizeof(struct Celluled));
        p->val= val;
        p->suiv=ld;
        ld->prec = p;
        p->prec=NULL;
    }
    return ld;
}

int main() {
    
    printf("##########################    Hello !!!  ##########################\n");
    //Liste l = NULL;
    Listed ld = NULL;
    int n;
    printf("Entrez le nombre d'elements a inserer:  ");
    scanf("%d",&n);
    //l=Insertion(l,n);
    ld=Insertion_LD(ld,n);
    affiche(ld);
    // printf("\nEntrez le nombre a inserer =  ");
    // //scanf("%d",&n);
    // l=Inserttion_L_T(l,n);
    // affiche(l);
    
}