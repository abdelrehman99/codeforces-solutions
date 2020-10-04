#include<stdio.h>
int main()
{
	int i=3,n,j,c=0,d;
	scanf("%d",&n);
	if(n>=1)
	{
		printf("2 ");
	}
	for(d=2;d<=n;)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				break;
			}
	    }
		if(j==i)
		{
			printf("%d ",i);
			d++;
		}
		i++;
	}
}
