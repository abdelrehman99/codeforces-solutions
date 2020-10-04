#include<string.h>
#include<string.h>
int main()
{
	int n,i,res;
	char a[]="I hate ";
	char b[]="I love ";
	char c[]="that ";
	scanf("%d",&n);
	if(n==1)
	{
		for(i=1;i<=n;i++)
		{
			res=i%2;
			switch (res)
			{
				case 0:
					strcat(a,b);
					break;
				default :
					strcat(a,c);
					break; 
			}
		}	
	}else
	{
		if (n%2==0)
		{
			printf("%sI love it",a);
		}else
		{
			printf("%sI hate it",a);
		}
	}
}
