#include<stdio.h>
int main()
{
	int n,d=0,a=0,e,i;
	scanf("%d",&n);
	char c[n];
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&c[i]);
		e=c[i];
		if(e!=65)
		{
			d++;
		}else 
		{
			a++;
		}
	}
	if(a>d)
	{
		printf("Anton");
	}else if(a<d)
	{
		printf("Danik");
	}else 
	{
		printf("Friendship");
	}
}

