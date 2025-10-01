#include <stdio.h>

int main(){
    int i;
    int T[1000];
    int n;
    int trie=1;

    
    do{
        printf("entrer la taille du tableau\n");
        scanf("%d", &n);
    }
    while(n>1000);
//ajout des elements dans le tableau
for (i=1; i<=n; i++){
  printf("entrer le %d element\n", i);
  scanf("%d", &T[i]);
}
    for ( i=0; i<=n; i++) {
      if(T[i]<=T[i+1]){
        trie=1;
      }
      if(T[i]>=T[i+1]){
        trie=1;
      }
      else{
        trie=0;
      }
    }
    if (trie==1){
        printf("le tableau est trie\n");
    }
     else{
        printf("le tableau n' est pas trie\n");
    }
return 0;
}

