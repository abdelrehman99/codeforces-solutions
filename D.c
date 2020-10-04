#include<stdio.h>
int main()
{
	long long n,i,j,x,k;
	scanf("%lli%lli",&x,&n);
	long long z[n],c[n],y[n];
	for(i=0;i<n;i++)
	{
		scanf("%lli",&z[i]);
	}
	for(j=0;j<n;j++)
	{
		c[j]=x-z[j];
		if(c[j]<0)
		{
			c[j]=-c[j];
		}
	}
	for(k=0;k<=n-1;k++)
	{
			if(c[k]<c[k+1])
		{
			c[k+1]=c[k];
			z[k+1]=z[k];
	    }
	}
	printf("%lli",c[n-1]);
}
