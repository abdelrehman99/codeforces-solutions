#include<stdio.h>
int main()
{
	int i,n,j,k;
	scanf("%d",&n);
	int x[n];
	unsigned long long c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		c[i]=x[i];
			for(j=x[i]-1;j>=1;j--)
				{
					c[i]=c[i]*j;
				}		
	}
	for(k=0;k<n;k++)
	{
		printf("%llu\n",c[k]);
	}
	
}
