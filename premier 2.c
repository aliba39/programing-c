#include <stdio.h>
void premier (int N)
{
  int i;
  int estpremier=1;
  for (i = 2; i<=N/2; i++)
    {
      if (N % i == 0)
	      estpremier=0;
	      break;
    }
  if (estpremier==1)
    printf ("le nombre est premier");
  else
    printf ("le nombre est non premier");


}

int main ()
{
  int N;
  printf ("donner le nombre :");
  scanf ("%d", &N);
  premier (N);

  return 0;
}

