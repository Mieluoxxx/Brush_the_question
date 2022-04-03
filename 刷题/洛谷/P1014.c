#include <stdio.h>
void panduan(long n)
{
	long x = 1,y = 1;
	long i = 0;
	long j = 0;
	long sum = 0;
	long a = 0;
	long b = 0;
	for(i=1;i<=10000;i++)
	{
		for(j=1;j<=x;j++)
		{
			sum += 1;
			if(sum == n)
			{
				a = x;
				b = j;
				break;	
			}  			
		}
		x++; 
	}
	y = b;
	if(a%2==0)
	{
		printf("%ld/%ld\n",b,a+1-b);
	}
		if(a%2!=0)
		{
			printf("%ld/%ld\n",a+1-b,b);
		} 
}
int main()
{
	long n = 0;
	scanf("%ld",&n);
	panduan(n);
	return 0;
} 
