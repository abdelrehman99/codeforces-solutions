#include<stdio.h>
int main()
{
	int i,j,y,k,n,b=0;
	scanf("%d",&n);
	int x[n],c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=2;k<b;j++)
	{
		//To find min prime
		for(k=0;k<n;k++)
		{
			if(j%x[k]==1)
			{
				c[k]=j;
				b++;
				printf("%d ",c[k]);
			}
		}
	}
	
}
