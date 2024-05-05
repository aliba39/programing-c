#include<stdio.h>
typedef struct 
{
	int jour;
	int mois;
	int annee;
} datenise;

typedef struct 
{
	char nom[15];
	int age;
	int tale;
	datenise date;
} personne;
//*****************************************
int main () 
{
	int n, i;
	personne p[20];
	printf("donnez le nombre des personnes : ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("donnez les information du personne %d : \n", i+1);
		printf(" taber le nom : ");
		scanf("%s", &p[i].nom);
		printf(" taber le age ");
		scanf("%d", &p[i].age);
		printf(" taber le tale : ");
		scanf("%d", &p[i].tale);
		printf(" donnez la DN : \n");
		printf(" jour : ");
		scanf("%d", &p[i].date.jour);
   		printf(" mois : ");
		scanf("%d", &p[i].date.mois);
		printf(" annee : ");
		scanf("%d", &p[i].date.annee);
	}
	for(i=0;i<n;i++)
	{
		printf("donnez les information du personne %d : \n", i+1);
		printf(" %s ,%d ,%d ,%d/%d/%d \n : ",p[i].nom,p[i].age,p[i].tale,p[i].date.jour,p[i].date.mois,p[i].date.annee);
		
	}

}
