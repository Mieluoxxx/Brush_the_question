#include <stdio.h>
int fanc(int n)
{
	int k = n;
	int sum = 0;
	int t= 0;
	while(n > 0)
	{
		t = n % 10;
		sum = sum * 10 + t;
		n = n / 10;	
	}	
	if(sum == k)  return 1;
	else return 0;
}

int main()
{
	int ans = 1;
	int i = 0;
	int j = 0;
	for (i = 100; i <= 999; i++) 
	{
		for (j = 100; j <= 999; j++) 
		{
			int sum = i * j;
			if (fanc(sum) && ans < sum)
			{
				ans = sum;
			}
		}
	}
	printf("%d",ans);
	return 0;
}
