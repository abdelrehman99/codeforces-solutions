#include<stdio.h>
int main()
{
	int c=0,x,d=0,i;
	for(c=0;c<1;)
	{
		scanf("%d",&x);
		if(x==1999)
		{
			c++;
			break;
		}else
		{
			d++;
		}
	}
	for(i=1;i<=d;i++)
	{
		printf("Wrong\n");
	}
	if(c==1)
	{
		printf("Correct");
	}
}
