#include<stdio.h>
#include<cs50.h>
int main ()
{
    int arr[5];
    for (int i=0; i<5; i++)
    {
        printf ("Enter an integer: ");
        scanf ("%d", &arr[i]);
    }
     for (int i=0; i<5; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}
