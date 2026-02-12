#include<stdio.h>
#include<cs50.h>
int main ()
{
    int arr[5], count=0;
    for (int i=0; i<5; i++)
    {
        printf ("Enter an integer: ");
        scanf ("%d", &arr[i]);
    }
     for (int i=0; i<5; i++)
    {
        if (arr[i]>0)
        count++;
    }
    printf ("Positive Numbers Count=%d", count);
    return 0;
}
