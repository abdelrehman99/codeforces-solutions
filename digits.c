#include<stdio.h>
int main()
{
	int n,i,j,y,c=0;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(j=0;j<n;j++)
	{
		y=x[j];
		if(x[i]<10)
		{
			printf("%d",x[i]);
		}
		else
		{
			while(y!=0)
		{
			y=y%10;
			printf("%d ",y);
			x[j]=x[j]/10;
			y=x[j];
		if(y<10)
		{
			printf("%d",y);
			c++;
			break;
		}
	    }
	    if(j!=n-1)
	    {
	    	printf("\n");
		}
		}	
	}
}
