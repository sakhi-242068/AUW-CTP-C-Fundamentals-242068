#include<stdio.h>
#include<cs50.h>
int main ()
{
int n;
printf("Enter an integer: ");
scanf("%d", &n);
if (n>0)
printf ("The number is positive");
else if (n<0)
printf("The number is negative");
else
printf("The number is zero");
return 0;
}
