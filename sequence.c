#include<stdio.h>
int loop(int a, int b);
int main()
{
	int i,j,c;
	int x[100],y[100];
	for(i=0;i>=0;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
		if(x[i]<=0 || y[i]<=0)
		{
			c=i;
			break;
		}
	}
	for(j=0;j<c;j++)
	{
		if(y[j]>x[j])
		{
			loop(x[j],y[j]);
		}	
		else if(y[j]<x[j])
		{
			loop(y[j],x[j]);
		}
		if(j!=c-1)
		{
			printf("\n");
		}
	}	
}
int loop(int x, int y)
{
	int i,sum=0;
	for(i=x;i<=y;i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("sum =%d",sum);
}
