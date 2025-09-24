#include <stdio.h>
#include <stdlib.h>

int main()
{
 int nomb1,nomb2,s=0,i;
     printf("Hello world!\n");
   do{
   printf("entrez un nomb1: ");
   scanf("%d",&nomb1);
   if(nomb1<0){ printf("nomb1 doit etre un nombres possitif\n");}
   }while(nomb1<=0);
   do{
   printf("entrez un nomb2: ");
   scanf("%d",&nomb2);
   if(nomb2<0){ printf("nomb2 doit etre un nombres possitif\n");}
   }while(nomb2<=0);
	for(i=1;i<=nomb1;i++){
	s=s+nomb2;
	}
    printf("%d",s);

    return 0;
}
