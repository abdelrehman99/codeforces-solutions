#include<stdio.h>
int main()
{
	int i,n,j,k,temp;
	scanf("%d",&n);
	int x[n];
	if(n==1)
	{
		printf("-1");
	}else 
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
	    }
			for(j=0;j<n-1;j++)
			{
				temp = x[j];
				x[j] = x[j+1];
				x[j+1] = temp;
			}
			for (k=0;k<n;k++)
			{
				printf("%d ",x[k]);
			}
    }
}

