#include<stdio.h>
#include<cs50.h>
int main ()
{
    string arr[3];
    for (int i=0; i<3; i++)
    {
        arr[i] = get_string("Enter a name: ");
    }
    printf ("Names:\n");
    for (int i=0; i<3; i++)
    {
        printf ("%s\n", arr[i]);
    }
    return 0;
}
