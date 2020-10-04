#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char s1,s2;
	cin>>s1>>s2;
	int a,b;
	a=atoi(s1);
	b=atoi(s2);
	if(a<b)
	{
		cout<<"-1";
	}
	else if(a>b)
	{
		cout<<"1";
	}
	else
	{
		cout<<"1";
	}
}
