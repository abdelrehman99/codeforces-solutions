#include<stdio.h>
#include<string.h>
int main()
{
	long long a,b,pro,y;
	scanf("%lli%lli",&a,&b);
	pro=a*b;
	char x[1000];
	itoa(pro,x,10);
	printf("%d",strlen(x));
}
