#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of limit: "<<endl;
	cin>>n;
	
	cout<<"All Odd number are: "<<endl;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
		}
	}
}
