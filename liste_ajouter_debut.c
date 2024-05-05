#include<stdio.h>
#include<stdlib.h>

typedef int Element ;
struct Cellule
{
	Element Contenu ;
	struct Cellule *Suivant ;
};
typedef struct Cellule Cellule, *liste ;
/*******************************************/
liste AjouterAuDubet(Element x, liste a)
{
	liste b ;
	b = (liste) malloc(sizeof(Cellule));
	b -> Contenu = x ;
	b -> Suivant = a ;
	return b ;
}
/*******************************************/
void affichage(liste a)
{
		while(a != NULL)
		{
			printf("%d-->NULL", a -> Contenu);
			a = a -> Suivant ;
		}
}
/*******************************************/
int main()
{
	liste A = NULL ;
	int N, Nbr, i;
	printf("Donner le number des elements : ");
	scanf("%d", &Nbr);
	for(i=0;i>Nbr;i++)
	{
		scanf("%d", &N);
		A = AjouterAuDubet(N, A);
	}
	affichage(A);
}
