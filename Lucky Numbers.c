#include<stdio.h>
int main()
{
	int i,x,y;
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(i==4 || i==7)
		{
			printf("%d ",i);
		}
	}
}
