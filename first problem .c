#include<stdio.h>
#include<stdio.h>
int main()
{
	int i,n,a;
	unsigned long long y;
	scanf("%d",&n);
	a=n;
	for(i=0;i<9;i++)
	{
		y=a*n;
		n=y;
	}
	printf("%llu",y);
}
