#include<stdio.h>
#include<cs50.h>
int main ()
{
    int arr[5], sum=0;
    float avg;
    for (int i=0; i<5; i++)
    {
        printf ("Enter an integer: ");
        scanf ("%d", &arr[i]);
    }
     for (int i=0; i<5; i++)
    {
        sum= sum+ arr[i];
    }
    avg = sum/5.0;
    printf ("avg=%.2f", avg);
    return 0;
}
