#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	int x[n][3];
	for( int i = 0 ; i < n ; i++)
	{
		for( int j = 0 ; j < 3 ; j++)
		{
			cin>>x[i][j];
		}
	}
	for( int i = 0 ; i < n ; i++)
	{
		if(x[i][0] + x[i][1] + x[i][2] >= 2)
		{
			c++;
		}	
	}
	cout<<c;	
}
