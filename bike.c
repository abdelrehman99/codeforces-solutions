#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,k;
	float y,x;
	scanf("%d%d%d",&n,&m,&k);
	x=(float)k/(n-m);
	y=ceil(x);
	if(m==n)
	{
		printf("-1");
	}else
	{
		printf("%d",(int)y);
	}	
}
