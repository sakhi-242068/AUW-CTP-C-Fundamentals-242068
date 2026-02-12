#include<stdio.h>
#include<cs50.h>
int main ()
{
    int age = get_int ("Enter your age: ");
    int c = get_int ("Enter 1 if you have citizenship, 0 if not");
    if (age>=18)
    {
        if (c==1)
        {
            printf ("Eligible to Vote");
        }
        else
        {
            printf ("Not Eligible to Vote");
        }
    }
    else
        {
            printf ("Not Eligible to Vote");
        }
    return 0;
}
