#include<stdio.h>
int loop(int a, int b);
int main()
{
	int x,y,i;
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		loop(x,y);
	}
	else
	{
		loop(y,x);
	}
}
int loop(int a,int b)
{
	int i;
	for(i=a;i>=1;i--)
	{
		if(a%i==0)
		{
			if(b>=i && b%i==0)
			{
				printf("%d",i);
				break;
			}
		}
	}
}
