#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of limit: "<<endl;
	cin>>n;
	int sum=0;
	
	cout<<"Sum of even numbers are: "<<endl;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	cout<<sum<<endl;
}
