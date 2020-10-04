#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		c++;		
	}
	printf("%d",c);
}
