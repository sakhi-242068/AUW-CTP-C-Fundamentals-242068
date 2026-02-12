#include<stdio.h>
#include<cs50.h>
int main ()
{
int n,b;
printf ("Enter n:");
scanf ("%d", &b);
for (n=1; n<=b; n++)
{
    for (int j=1; j<=n; j++){
    printf ("*");
}
printf("\n");
}
return 0;
}
