#include <stdio.h>
int pgcd(int i, int j)
{
	printf("a=%d | b=%d\n", i, j);
    if (j != 0)
       return pgcd(j, i%j);
    else 
       return i;
}

int PGCD(int a, int b)
{
	printf("a=%d | b=%d\n", a, b);
	if(a==b)
	{
		return a; 
	} 
	else
	{
		if(a>b)
			return PGCD(a-b, b);
		else
			return PGCD(a, b-a);
	 }
}

int main()
{
   int a, b;
   
   printf("Entrez deux entiers: ");
   scanf("%d %d", &a, &b);
   
   printf(" PGCD 1 de %d et %d = %d\n", a, b, pgcd(a,b));
   printf("\n PGCD 2 de %d et %d = %d", a, b, PGCD(a,b));

   return 0;
}
