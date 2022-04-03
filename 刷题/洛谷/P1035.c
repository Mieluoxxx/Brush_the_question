#include <stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	double sum = 0.0;
	int n = 0;
	for(sum = 0.0;sum<=k;++n,sum += 1.0/n);
	printf("%d",n);
	return 0;
} 
