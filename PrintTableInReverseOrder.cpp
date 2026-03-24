#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the tables number: "<<endl;
	cin>>n;
	
	cout<<"The table is: "<<endl;
	for(int i=10;i>=1;i--)
	{
		cout<<i<<" * "<<n<<" = "<<n*i<<endl;
	}
}
