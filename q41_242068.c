#include<stdio.h>
#include<cs50.h>
int main ()
{
    float arr[5] = {2.1, 2.2, 4.567, 2.36, 5.666};
     for (int i=0; i<5; i++)
    {
        printf ("%.2f ", arr[i]);
    }
    return 0;
}
