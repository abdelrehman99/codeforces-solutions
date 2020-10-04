#include<stdio.h>
int main()
{
	unsigned long long x,y,z;
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		z=x%y;
		printf("%d",z);
	}else if(y>x)
	{
		z=y%x;
		printf("%d",z);
	}else
	{
		printf("0");
	}
}
