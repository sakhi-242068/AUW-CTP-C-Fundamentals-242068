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
    int largest = arr[0];
    for (int i=0; i<5; i++)
    {
        if (arr[i]>largest)
       largest=arr[i];
    }
     printf ("largest = %d", largest);
    return 0;
}
