#include<stdio.h>
#include<cs50.h>
int main ()
{
    int year = get_int("Enter the year: ");
    if (year<=0)
    {
        printf("Invalid Year");
    }
    else if (year%400==0)
    {
        printf("Leap Year");
    }
    else if (year%100==0)
    {
        printf("Not Leap Year");
    }
    else if (year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}
