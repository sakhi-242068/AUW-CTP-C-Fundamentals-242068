#include<stdio.h>
#include<cs50.h>
int main ()
{
  int a=5;
  int i;
  for (i=0; i<=10; i++)
  {
    printf ("%d x %d = %d \n", a, i, a*i);
  }
return 0;
}
