#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int x[n];
	scanf("%d",&x[0]);
	for(i=1;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]<x[i-1])
		{
			x[i]=x[i-1];
		}
	}
	printf("%d",x[n-1]);
}
