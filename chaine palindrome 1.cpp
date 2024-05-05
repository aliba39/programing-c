#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char mot[40];
	int i,bool=1,size;
	
	printf("donnez une mot : ");
	gets(mot);
	
	size = strlin(mot);
	for(i=0;i<size/2;i++)
	{
		if(mot[i] != mot[i]-i+1)
		{
			bool = 0;
			printf(" %s n'est pas un palindrome ", mot)
		}
	}
	if(bool = 1)
	{
		printf(" %s est un palindrome ", mot);
    }
    return 0;
}
