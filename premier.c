#include <stdio.h>
void premier (int N)
{
  int cpt, i;
  for (i = 2; i < N; i++)
    {
      if (N % i == 0)
	   cpt++;
    }
  if (cpt == 0)
    printf ("le nombre est permier");
  else
    printf ("le nombre est non permier");


}

void main ()
{
  int N;
  printf ("donner le nombre : ");
  scanf ("%d", &N);
  premier (N);

}
