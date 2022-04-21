#include <stdio.h>
int main()
{
	int a[10],h,b = 0;
	for (int i; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	
	scanf("%d", &h);
	for (int j = 0; j < 10; j++)
	{
		if ( h + 30 >= a[j])
			b++;
	}
	printf("%d", b);
	return 0;
}
