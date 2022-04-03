#include <stdio.h>
#include <stdlib.h>
void sort(int *a,int n)
{
	int i = 0;
	int j = 0;
	int t = 0;
	for(i = 0;i < n - 1;i++)
		for(j = 0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	for(i = 0;i<n;i++)
	printf("%d ",a[i]);
	
}

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d",&n);
	int *a = NULL;
	a = (int*)malloc(n*sizeof(int));
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	free(a);
	return 0;
}
