#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the tables number: "<<endl;
	cin>>n;
	
	cout<<"The table is: "<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
}
