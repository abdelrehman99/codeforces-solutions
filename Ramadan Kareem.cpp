#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	if (n <= m)
	{
		if (m == (n * (m / n)))
		{
			cout << "Ramadan Kareem";
		}
		else cout << -1; 
	}
	else cout << "-1";
}
