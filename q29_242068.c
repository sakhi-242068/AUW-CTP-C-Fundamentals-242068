#include<stdio.h>
#include<cs50.h>
int main ()
{
    int a,b;
    printf ("Enter one integer: ");
    scanf("%d", &a);
    printf ("Enter another integer: ");
    scanf("%d", &b);
    if (a>b)
    printf ("%d is greater", a);
    else if (b>a)
    printf ("%d is greater", b);
    else
    printf ("%d and %d are equal", a,b);
    return 0;
}

