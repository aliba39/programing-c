#include<stdio.h>
void main()
{
	int i, T[20], min;
	printf("\nRemplissage du tableau: \n");	
    for(i=0; i<20; i++){
   		printf("Entrer l'element %d :", i+1);
   		scanf("%d",&T[i]);
	}  
	
	min = T[0];
	for(i=0; i<20; i++){
   		if(T[i] < min)
   			min = T[i];
	}
		printf("\nLe min est :%d\n", min);

	for(i=0; i<20; i++){
		if(min==T[i])
			printf("\n Le rang de min : %d \n", i+1);
		}
}

