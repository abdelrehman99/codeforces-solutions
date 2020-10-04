#include<stdio.h>
int main()
{
	int i,x,n,c=0;
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		if(x%i!=0)
		{
			c++;
		}
	}
	if((x-2)==c)
	{
		printf("YES");
	}else
	{
		printf("NO");	
	}
}
