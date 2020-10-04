#include<stdio.h>
int main()
{
	int i,j,k,c=0,n[i-1];
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		n[i-1]=i;
		for(j=100;j>=1;j--)
		{
			if(j%n[i-1]==0 && j>n)
			{
				for(k=j;j%n[i-1] && n[i-2] && (i-2)>1;j--)
				{
					c=j;
				}
			}
		}
	}
	printf("%d",c);
}
