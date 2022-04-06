#include <stdio.h>
#include <math.h>
long long isprime(long long n)
{
	long long i = 0;
	int flag = 1;
	long long m = sqrt(n);
	for(i = 2;i <= m;i++)
	{
		if(n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if(flag)	
	return 1;
	else
	return 0;
}

int main()
{
	long long i = 0;
	for(i = 2;i < 600851475143;i++)
	{
		if(600851475143 % i == 0 && isprime(600851475143/i))
		{
			printf("%lld",600851475143/i);
			break;								
		}
	}	
	return 0;
} 
