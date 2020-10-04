#include<iostream>
using namespace std;
unsigned long factfunc(unsigned long); //declaration
int main()
{
int n; //number entered by user
unsigned long fact; //factorial
cout << "Enter an integer: ";
cin >> n;
fact = factfunc(n);
cout << "Factorial of " << n << " is " << fact << endl;
return 0;
}
unsigned long factfunc(unsigned long n) // calls itself to calculate factorials
{
if(n > 1)
return n * factfunc(n-1); //self call
else
return 1;
}
