#include<stdio.h>
#define N 100

void read(int tab[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("donner elem%d: ",i);
		scanf("%d",&tab[i]);
	}
}
//*********************************************************
void write(int tab[], int n)
{
	int i;
	for( i=0;i<n;i++)
		printf(" %d |",tab[i]);
}
//*********************************************************

void somme(int tab[], int n)
{
	int s=0;
	int i;
	for(i=0;i<n;i++){
	   s = tab[i]+s;
}
	   printf("%d", s);
}
//*********************************************************
int max(int x, int y)
{
	int max = x;
	if(y>max)
	   max = y; 
	return max;
}
//*******************************************************
void trier(int tab[], int n)
{
	int i, j, tmp;
	for(i=0;i<n;i++){
	    for(j=i+1;j<n;j++){
	    	if(tab[i]>tab[j]){
	    tmp = tab[i];
	    tab[i] = tab[j];
	    tab[j] = tmp;
	        }   
        }
    printf(" %d |",tab[i]);
    }
}
//*******************************************************
void main(){
	int tab1[N], tab2[N],tab3[N];
	int n1,n2,n3,x,y;
		
	printf("donner les tailles des tab1, tab2, tab3: <%d \n",N);
	scanf("%d %d %d",&n1,&n2,&n3 );
		
	printf(" \n lecture Tab1 : \n");	read(tab1,n1);
	
	printf(" \n lecture Tab2 : \n"); 	read(tab2,n2);
	
	printf(" \n lecture Tab3 : \n"); 	read(tab3,n3);	 
	
	printf(" \n affichage Tab1 : \n");	write (tab1,n1); 
	
	printf(" \n affichage Tab2 : \n");	write (tab2,n2); 
	
	printf(" \n affichage Tab3 : \n");	write (tab3,n3); 
		
	printf(" \n somme Tab1 : \n");	somme (tab1,n1); 
	
	printf(" \n somme Tab2 : \n");	somme (tab2,n2); 
	
	printf(" \n somme Tab3 : \n");	somme (tab3,n3); 
	
	printf(" \n max : \n");	max ( x, y ); 
	
	printf(" \n trier Tab1 : \n");	trier (tab1,n1); 
	
	printf(" \n trier Tab2 : \n");	trier (tab2,n2); 
	
	printf(" \n trier Tab3 : \n");	trier (tab3,n3); 
}
