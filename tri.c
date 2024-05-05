#include<stdio.h>
#include<stdlib.h>
#define N 100

int affichageMenu()
{
    char choixMenu;
    
    printf("**************bonjour**************\n");
    printf("a.triselection \n");
    printf("b.tribull      \n");
    printf("c.triInsertion \n");
    printf("***********************************\n\n");
    printf("Votre choix (a, b ou c )? : ");
    scanf("%c", &choixMenu);
    return choixMenu;
}


int tableau(int *t, int n)
{
    int  i;
 
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
    t = (int*)malloc(n * sizeof(int));
    if (t == NULL)
    {
        printf("Échec de l'allocation\n");
        return EXIT_FAILURE;
    }
    for ( i = 0; i < n; ++i)
    {
        t[i] = rand();
        printf("t[%u] = %d\n", i, t[i]);
    }
    return tableau;
}


int swap(float t[], int i, int j)
{
	float help;
	help = t[i];
	t[i] = t[j];
	t[j] = help;
	
	return swap;
}
	
	
void triselection(int t[], int n)
{

 	int i, j, i_min;
 	for(i = 1 ; i <= n-1 ; i++)
 	{
 	i_min = i - 1; 
 		for(j = i ; j < n ; j++)
 		{
 			if(t[j] < t[i_min])
 				i_min = j;
 				
 			if(i_min > i)
				swap(t, i_min, i);
		}
	}
	printf(" %d |",t[i]);

}

void tribull(float t[], int n)
{

 	int i, k;
 	for(i = 1 ; i <= n-1 ; i++)
 	{
 		for(k = i - 1 ; k < n - 1 ; k++)
 		{		
 			if(t[k] > t[k + 1])
				swap(t, k, k + 1);
		}
	}
}

void triInsertion(float t[], int n)
{

 	int i, k;
 	for(i = 1 ; i < n ; i++)
 	{
 		k = i;
 		while(k > 0 && t[k - 1])
 		{		
				swap(t, k, k + 1);
				k--;
		}
	}
}

int main()
{
	int t[N], n, choix;
	
	tableau(t, n);
	
	choix=affichageMenu();

	switch(choix)
    {
    	case 'a':
			triselection(t, n);
			
            break;
        case 'b':
			
			
        	break;
        case 'c': 
			           	
            break;
		    default:
		    	printf("entrez a, b ou c \n");
		    	
            break;
	    }
	system("PAUSE"); 
	system("cls");
  
  return 0;
	
}
