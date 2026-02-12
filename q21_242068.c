#include<stdio.h>
#include<cs50.h>
int main ()
{
int n;
for (n=1; n<=3; n++)
{
    for (int j=1; j<=n; j++){
    printf ("*");
}
printf("\n");
}
return 0;
}
