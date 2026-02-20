#include <stdio.h>
int main()
{
    int n;
    int i;
    printf("Enter the number");
    scanf("%d", &n);
    int sum = 0;
    for (i = 1; i <=n; i++)
    {
        sum += i;
    }
    printf("Total sum is %d", sum);
    return 0;
}