#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,f=0,p=0;
	float c,y;
	scanf("%d",&n);
	char x[n];
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&x[i]);
		if(x[i]=='0')
		{
			f++;
		}else
		{
			p++;
		}
	}
	c=(float)n/2;
	y=ceil(c);
	if(p>=(int)y)
	{
		printf("0");
	}else
	{
		printf("%d",(int)y-p);
	}
	
}
