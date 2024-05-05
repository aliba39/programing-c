#include <stdio.h>
#include <stdlib.h>
#define N 100


int affichageMenu()
{
    char choixMenu;
    
    printf("**************bonjour**************\n");
    printf("a.Convertir la phrase en Majuscule. \n");
    printf("b.Convertir la phrase en Minuscule. \n");
    printf("c.Quitter le porgramme. \n");
    printf("***********************************\n\n");
    printf("Votre choix (a, b ou c )? : ");
    scanf("%c", &choixMenu);
    return choixMenu;
}


int majuscule(char str[]) {
	int i;
    printf("\n saisir une phrase : ");
	gets(str);
    for (i=0; i<strlen(str); i++) 
    {
    	str[i]=toupper (str[i]);
    }
    printf("\n afficher la phrase = %s \n", str);
    return 0;
}

int minuscule(char str[]) {
    int i;
    printf("\n saisir une phrase : ");
	gets(str);
    for (i=0; i<strlen(str); i++) 
    {
    	str[i]=tolower (str[i]);
    }
	printf("\n afficher la phrase = %s \n", str);

    return 0;
}



int main() 
{
	char str[N], mot;
	int choix;
	choix=affichageMenu();

	switch(choix)
    {
    	case 'a':
			gets(str);
    		minuscule(str);
			
            break;
        case 'b':
			gets(str);
    		majuscule(str);
			
        	break;
        case 'c': 
			printf("Pour accepter de quitter, appuyez sur C ou c \n");
    		mot = getche();
            if(mot == 'c' || mot == 'C')
            	break;
            else
            	affichageMenu();
            	
            	break;
		    default:
		    	printf("entrez a, b ou c \n");
		    	
            break;
	    }
	system("PAUSE"); 
	system("cls");
  
  return 0;
}
