#include <stdio.h>
#include <math.h>
int isprime(int a)
{
	int i = 0;
	for(i = 2; i<=sqrt(a);i++)
		if(a % i==0) break;
		if(i>sqrt(a) && a>1)	return 1;
		return 0;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int i = 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(isprime(i)&& isprime(n/i) && n%i==0)
		{
			printf("%d",n/i);
			break;
		}
	}
	return 0;
}
