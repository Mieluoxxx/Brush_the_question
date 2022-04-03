#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l,m,i,n,f,j;
    int count=0;
    scanf("%d %d\n",&l,&m);
    int a[l+1];
    for(j=0;j<l;j++)    a[j]=0;
    a[l]=0;
    int u[m],v[m];
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&u[i],&v[i]);
        for(n=0;n<=l;n++)
        {
            if(u[i]<=n&&v[i]>=n)    a[n]+=1;
        }
    }
    for(n=0;n<=l;n++)
    {
        if(a[n]==0)
            count+=1;
    }
    printf("%d",count);
    return 0;
}
