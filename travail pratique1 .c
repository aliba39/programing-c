#include<stdio.h>
#define N 100
int main () 
{
	int i, max, min, moy, s, tab[20];
	//************************************************  
	printf(" \n lecture Tab : \n");
	for(i=0;i<20;i++)
	{
		do{
		printf("donner elem%d: ",i);
		scanf("%d",&tab[i]);
	    }while(tab[i]<-100||tab[i]>100);
	}
	//************************************************
	printf(" \n max de tab : \n");
	max=tab[0];
	for(i=0;i<20;i++){
	    if(tab[i]>max)
	    max=tab[i];
    }  
	  printf("%d", max); 
	//************************************************
	 printf(" \n min de tab : \n");
	min=tab[0];
	for(i=0;i<20;i++){
	    if(tab[i]<min)
	    max=tab[i];
    }  
	  printf("%d", min); 
    //************************************************
    printf(" \n moyenne de tab : \n");
     s=0;
	for(i=0;i<20;i++){
	   s = tab[i]+s;
    }
      moy=s/20;
    printf("%d", moy); 

	//************************************************
	printf(" \n affichage Tab3 : \n");
	for( i=0;i<20;i++)
		printf(" %d |",tab[i]);
}
