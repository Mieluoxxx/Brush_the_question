#include <stdio.h>
int main()
{
	int a,b,c = 0;
	int i,max = 0;
	for(i = 0;i < 7;i++)
	{
		scanf("%d %d",&a,&b);
		if(max < a+b)
		{
			max = a+b;
			if(max > 8) c = i+1;
		}
	}
	printf("%d",c);
	return 0;
}
