#include<string.h>
#include<string.h>
int main()
{
	int n,i,res;
	char a[]="I hate ";
	char b[]="I Love ";
	char c[]="that ";
	char d[]="it ";
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		strcat(a,c);
		strcat(a,b);
	}
	strcat(a,d);
	printf("%s",a);
}
