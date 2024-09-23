#include <stdio.h>

int sum(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}
int main()
{
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    int r = sum(n);
    printf("Sum of all terms is : %d", r);
}
