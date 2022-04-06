#include <stdio.h>
#include <math.h>
int isprime(int n)
{
    int flag  = 1;
    int i = 0;
    int m = sqrt(n);
    for(i = 2; i <= m;i++)
    {
        if(n % i == 0) 
        {
            flag = 0;
            break;
        }
    }
    if(flag) return 1;
    else return 0;
}

int main()
{
    int a[100001];
    int i = 0;
    int j = 0;
    for(i = 2; i< 3000000;i++)
    {
        if(j == 100000) break;
        if(isprime(i))  
        {
            a[j++] = i;
        }
    }
    printf("%d",a[10000]);
    return 0;
}