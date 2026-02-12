#include<stdio.h>
#include<cs50.h>
int main ()
{
    int a,b,c;
    printf ("Enter one integer: ");
    scanf("%d", &a);
    printf ("Enter another integer: ");
    scanf("%d", &b);
    printf ("Enter another integer: ");
    scanf("%d", &c);
    if (a == b && b == c)
    printf("All three numbers are equal");
    else if (a==b && a>c)
    printf("%d and %d are equal and greater", a, b);
    else if (a==c && a>b)
    printf("%d and %d are equal and greater", a, c);
    else if (b==c && b>a)
    printf("%d and %d are equal and greater", b, c);
    else if (a>b && a>c)
    printf ("%d is greater", a);
    else if (b>a && b>c)
    printf ("%d is greater", b);
    else if (c>a && c>b)
    printf ("%d is greater", c);
    return 0;
}

