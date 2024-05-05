#include<stdio.h>
void main()
{
	int n, i, c, T1[30], T2[30];
	
	printf("Entrer la taille des deux tableaux: ");
	scanf("%d",&n);
	
	printf("\nRemplissage du tableau 1: \n");	
    for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T1[i]);
	}  
	printf("\nRemplissage du tableau 2: \n");	
	for(i=0; i<n; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T2[i]);
	} 
	
	for(i=0;i<n;i++){
   		if(T1[i] == T2[i])
			printf("\n Le rang de l'element est égal entre a et b : %d \n", i+1);
	}  
}

