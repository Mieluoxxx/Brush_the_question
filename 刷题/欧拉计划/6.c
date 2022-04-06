#include <stdio.h>
int main()
{
    int n = 20;
    int i = 0;
    int sum1 = 0;
    int sum2 = 0;
    for(i = 1;i <= n;i++)
    {
        sum1 += i*i;
    }
    for(i = 1;i<=n;i++)
    {
        sum2 += i;
    }
    sum2 = sum2 * sum2;
    printf("%d",sum2 -sum1);
    return 0;
}