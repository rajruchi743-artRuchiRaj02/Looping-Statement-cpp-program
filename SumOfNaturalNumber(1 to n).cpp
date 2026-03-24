#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of limit element: "<<endl;
	cin>>n;
	int sum=0;
	
	cout<<"The sum of natural number are: "<<endl;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<sum<<endl;
}
