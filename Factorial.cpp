#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter factorial Number: "<<endl;
	cin>>n;
	int fact=1;
	
	
	cout<<"Factorial: "<<endl;
	for(int i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	cout<<fact<<endl;
}
