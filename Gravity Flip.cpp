#include<iostream>
using namespace std;
int main()
{
	int n,temp,c=2,d=0;
	cin>>n;
	int x[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin>>x[i];
	}
	for( int i = 0 ; i < n ; i++)
	{
		for( int j =i+1 ; j < n ; j++)
		{
			if(x[i]>x[j])
			{
				swap(x[i],x[j]);
			}
			else
			{
				continue;
			}
		}
	}
	for( int j =0 ; j < n ; j++)
	{
		cout<<x[j]<<" ";	
	}
	
}
