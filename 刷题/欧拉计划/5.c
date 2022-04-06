#include <stdio.h>
int gcd(int x,int y)
{
    int temp,r;
    if(x<y) 
    {
        temp = x;
        x = y;
        y = temp;
    }
    if(x==y) return y;
    r = x % y;
    while(r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}

int lcm(int x,int y)
{
    return x*y/gcd(x,y);
}

int main()
{
    int a[20] =  {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i = 0;
    int v = 1;
    for(i = 1;i<=18;i++)
    {
        v = lcm(v,a[i]);
    }
    int sum = 0;
    printf("%d\n",sum);
    printf("%d",v);
    return 0;
}