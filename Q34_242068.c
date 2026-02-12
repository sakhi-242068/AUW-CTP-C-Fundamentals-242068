#include<stdio.h>
#include<stdio.h>
int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    int max = findMax(x, y);
    printf("Maximum = %d\n", max);
    return 0;
}
