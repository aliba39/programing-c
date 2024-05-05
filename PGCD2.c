#include<stdio.h>

int main()
{
    int a,b,r,x,y;
    do
    	scanf("%d",&a);
    while (a<=0);
    do
    	scanf("%d",&b);
    while (b<=0);

    if (a>b)
    {
      	x=b;
       	r=a%b;
    }
    else
    {
   		x=a;
    	r=b%a;
    }
     while(r!=0)
    {	
    	y=x;
        x=r;
        r=y%x;          
    }
    printf("%d",x);
    return 0;
}
