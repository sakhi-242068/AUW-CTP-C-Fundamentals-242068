#include<stdio.h>
#include<cs50.h>
int main ()
{
    float temp;
    printf ("Enter the temperature:");
    scanf("%f", &temp);
    if (temp<20)
    {
        printf ("Cold");
    }
    else if (temp>=20 && temp<=30)
    {
        printf ("Warm");
    }
    else
    {
        printf ("Hot");
    }
    return 0;
}
