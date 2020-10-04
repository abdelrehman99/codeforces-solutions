#include<stdio.h>
int main()
{
	int n,i,j,c=0,d=0;
	char x[i];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&x[i]);
	}
	x[n]==0;
	for(j=0;j<n;j++)
	{
		if(x[j]=='S')
		{
			if(x[j+1]=='F')
			{
				c++;
			}
		}else
		{
			if(x[j+1]=='S')
			{
				d++;
			}
		}
	}
	if(c>d)
	{
		printf("Yes");
	}else
	{
		printf("No");
	}
}
