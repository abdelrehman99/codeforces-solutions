#include<stdio.h>

#include<string.h>

int main()
{
	char name[12];
	int n,c=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",name);
		switch(name[0])
		{
			case'T':
				c=c+4;
				break;
			case 'C':
				c=c+6;
				break;
			case 'O':
				c=c+8;
				break;	
			case 'D':
				c=c+12;
				break;
			case 'I':
				c=c+20;
				break;	
			default :
				c=0;				
		}	
		
		
	}
	printf("%d",c);
}
	

