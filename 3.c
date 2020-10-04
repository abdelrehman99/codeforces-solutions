#include<stdio.h>
int main()
{
	int i,n=0,e=0,o=0,p=0,y;
	scanf("%d",&y);
	int x[y];
	for(i=0;i<y;i++)
		{
			scanf("%\nd",&x[i]);
			if(x[i]>0 && x[i]!=0)
			{
				p++;
			}
			else
			{
				n++;
			}
		}
		printf("Even: %d\nodd: %d\nPositive: %d\nNegative: %d",e,o,p,n);
}
