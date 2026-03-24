#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the digit: "<<endl;
	cin>>n;
	
	int sum=0;
	for(int i=0;n!=0;i++)
	{
		int digit = n % 10;
		sum = sum + digit;
		n = n/10;
	}
	cout<<"Sum of digit = "<<sum<<endl;
}
