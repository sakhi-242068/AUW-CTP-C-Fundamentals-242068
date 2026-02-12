#include<stdio.h>
#include<cs50.h>
int main ()
{
int n;
printf("Enter an integer: ");
scanf("%d", &n);
if (n>=1 && n<=100)
printf ("The number is in the range");
else
printf("The number is not in the range");
return 0;
}
