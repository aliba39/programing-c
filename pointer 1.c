#include<stdio.h>
int my_fonction(int *x,int y)
{
	*x = *x * 2 ;
	y = y + 2 ;
	return (*x + y) ;
}
void main()
{
	int x = 5 ;
	int y = 10 ;
	int z ;
	z = my_fonction(&x, y * 2) ;
	printf("\nx = %d\n", x) ;
	printf("y = %d\n", y) ;
	printf("z = %d\n", z) ;

}
