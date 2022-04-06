#include <stdio.h>
int main()
{
	int a1 = 1;
	int a2 = 2;
	int t = 0;
	int sum = 2;
	int i = 1;
	while(a2 < 4000000)
	{
		t = a1 + a2;
		a1 = a2;
		a2 = t;
		i++;
		if(a2 > 4000000) break;
		if(t % 2 == 0)
		{
			sum += t;
		}
	}
	printf("%d",sum);
	return 0;
}
