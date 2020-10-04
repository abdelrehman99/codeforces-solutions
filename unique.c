#include<stdio.h>
int main()
{
	int i,x,n,j,c=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j!=0)
			{
				c++;
			}
		}
		if(c==(i-2))
		{
			printf("%d ",i);
		}
	}
}
