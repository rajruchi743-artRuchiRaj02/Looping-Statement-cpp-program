#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the digit: "<<endl;
	cin>>n;
	
	int rev=0;
	for(int i=0;n!=0;i++)
	{
		int digit = n % 10;
		rev = rev*10 + digit;
		n = n/10;
	}
	cout<<"Reversed digit = "<<rev<<endl;
}
