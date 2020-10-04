#include<iostream>
using namespace std;
int main()
{
	int l , b , c = 0;
	cin>>l>>b;
	if(b>l)
	{
		while(b>l)
	{
		l = 3 * l;
		b = 2 * b;
		c++;
	}	
	}
	if(b==l)
	{
		c++;
	}
	cout<<c;
}
