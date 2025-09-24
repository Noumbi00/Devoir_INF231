#include <stdio.h>
int main(){

   float valeur;
   float tab[9];
   int i;
   printf("RECHERCHE SEQUENTIELLE DANS UN TABLEAU\n");
for(i=0;i<=9;i++) {
  printf("entrer tab[%d] :",i);
  scanf("%f", &tab[i]);
  }
printf("entrer la valeur a rechercher:");
scanf("%f", &valeur);
i=0;
while ((i<=9) && (valeur!=tab[i])){
i=i+1;
}
if ((i<=9) && (tab[i] == valeur)){
printf("la valeur se trouve dans l'index %d\n", i);
}
else {
printf("la valeur ne se trouve pas dans le tableau\n");
}
return 0;  
}
