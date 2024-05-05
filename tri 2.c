#include<stdio.h>
#include<stdlib.h>
#define N 100

int affichage_menu()
    {
        int c;
        printf("\n1-Choix du tri\n2-Type de tableau\n3-Afficher le tableau\n4-Temps d'execution\n");
        scanf("%d",&c);
        return c;
    }
void menu (int c)
    {
        int choixTri,choixTab,choixAffichage;
        int i, tab[MAX],taille=40;
        switch(c)
        {
            case 1:
                {
                    printf("\nChoisir le tri:\n\n1- Extraction\n2- Insertion\n3- Bulles\n");
                    scanf("%d",&choixTri);
                    menu(affichage_menu()); // ceci afin de retourner au menu et choisir le type de tableau.
                } break;
            case 2:
                {
                    printf("\nChoisir le type de tableau:\n\n1- Identite\n2- Inverse\n3- Aleatoire\n");
                    scanf("%d",&choixTab);
                    menu(affichage_menu()); // ceci afin de retourner au menu et choisir le mode d'affichage du tableau.
                } break;
            case 3:
                {
                    printf("Afficher le tableau:\n\n1- Avant tri\n2-Apres tri\n");
                    scanf("%d",&choixAffichage);
                }
        }
    }
    
int main()
{
	switch(affichage_menu())
	{
		case 1:
    		{
		        if(choixTab==1){ // là c'est le cas où l'utilisateur aurait choisi un tableau identité(t[i]=i)
		            tabIdentite(tab,taille);
		            affichage_Tab(tab,taille);}// c'est une fonction que j'ai créé juste pour l'affichage
		        if(choixTab==2){
		            tabInverse(tab,taille);
		            affichage_Tab(tab,taille);}
		        if(choixTab==3){
		            tabAleatoire(tab,taille);
		            affichage_Tab(tab,taille);}*/
    		} break;
    	
}
