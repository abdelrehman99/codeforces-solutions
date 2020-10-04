#include<stdio.h>
int main()
{
	int i,n,j,k,sum=0;
	scanf("%d",&n);
	int x[n],y[n];
	for(j=0;j<n;j++)
	{
		scanf("%d%d",&x[j],&y[j]);
    }
    for(k=0;k<n;k++)
    {
    	sum=0;
		if(x[k]>y[k])
		{
			for(i=y[k];i<x[k];i++)
	{
		if(i%2==1 && i!=y[k])
		{
			sum=sum+i;
			printf("%d\n",sum);
		}
	}
		}
		else if(x[k]<y[k])
		{
			for(i=x[k];i<y[k];i++)
			{	
				if(i%2==1 && x[k]!=i)
				{
					sum=sum+i;
				}else
				{
					sum=sum+0;
				}
				if(i==y[k]-1)
				{
					printf("%d\n",sum);
				}
			}
		}
		else
		{
			printf("%d\n",sum);
		}
	}
}
