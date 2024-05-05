#include<stdio.h>
#define N 4

void lectur(int M[N][N])
{
	int i, j; 
	printf("Entrez les elements du matrice : \n");
	for(i=0;i<N;i++)
	{
    	for(j=0;j<N;j++)
    	{
			printf("m[%d][%d]= ", i+1, j+1);
			scanf("%d", &M[i][j]);
		}
	}
}
void affichage(int M[N][N])
{
	int i, j;
	for(i=0;i<N;i++)
	{
    	for(j=0;j<N;j++)
    	{
			printf("%d  |", M[i][j]);
		}
	printf("\n");	
	}
}
int Rotation(int K[N][N],int M[N][N])
{

	int i, j;
	for (i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
            K[i][j]=M[N-j-1][i];
		}
	}
	return 0;
}

int main ()
{
	int M[N][N], K[N][N], S[N][N], O[N][N];
	printf("\n lectur matrice 1 : \n");  lectur(M);
	printf("\n affichage matrice 1 : \n");  affichage(M);	Rotation(K,M);
	printf("\n affichage matrice 90 : \n");  affichage(K);	Rotation(S,K);
	printf("\n affichage matrice 180 : \n");  affichage(S);	Rotation(O,S);
	printf("\n affichage matrice 270 : \n");  affichage(O);
}
