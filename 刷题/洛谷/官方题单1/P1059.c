#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d",&n);
	int a[101];
	int i = 0;
	for(i = 0; i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b[1001] = {0};
	for(i = 0;i < n;i++)
	{
		b[a[i]] = 1;
	}
	int m = 0;
	int c[1001] = {0};
	for(i=0;i<1001;i++)
	{
		if(b[i]==1) 
		{
			m++;
			c[i] = i;		
		}

	}
	printf("%d\n",m);
	for(i=0;i<1001;i++)
	{
		if(b[c[i]]==1)
		printf("%d ",c[i]);
	}
	return 0;
}
