#include<stdio.h>
#include<cs50.h>
void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}
