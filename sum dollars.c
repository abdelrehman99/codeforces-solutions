#include<stdio.h>
int main()
{
	int x,sum=0;
	scanf("%d",&x);
	if(x%4==0)
	{
		sum++;
	}else if (x%3==0)
	{
		sum++;	
	}
	printf("%d",sum);
}
