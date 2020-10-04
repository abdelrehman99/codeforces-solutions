#include <iostream>
using namespace std;
int main()
{
    int n[3][3];
    for(int i = 0 ; i < 3 ; i++)
    {
        for( int j = 0 ; j < 3 ; j++)
        {
            cin>>n[i][j];
        }
    }
    for(int a = 0 ; a < 3 ; a++)
    {
        for( int b = 0 ; b < 3 ; b++)
        {
            if(n[0][0]%1 == 0)
    {
    n[1][0] = n[1][0] + 1;
    n[0][1] = n[0][1] + 1;
    }
if(n[0][2]%1 == 0)
{
n[1][2] = n[1][2] + 1;
n[0][1] = n[0][1] + 1;
}
if(n[2][0]%1 == 0)
{
n[1][0] = n[1][0] + 1;
n[2][1] = n[2][1] + 1;
}
if(n[2][2]%1 == 0)
{
n[2][1] = n[2][1] + 1;
n[1][2] = n[1][2] + 1;
}
cout<<n[a][b]<<" ";
    }
        cout<<endl;
}
}//
// Created by acer on 2/29/2020.
//

