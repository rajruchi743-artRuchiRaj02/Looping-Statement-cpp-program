#include<iostream>
using namespace std;
int main()
{
	int count=0,sum=0;
	
	cout<<"Number divisible by 9 between 100 and 200: "<<endl;
	for(int i=100;i<=200;i++)
	{
		if(i % 9==0)
		{
			cout<<i<<" "<<endl;
			count++;
			sum+=i;
		}
	}
	cout<<"Total numbers = "<<count<<endl;
	cout<<"Sum = "<<sum<<endl;
}
