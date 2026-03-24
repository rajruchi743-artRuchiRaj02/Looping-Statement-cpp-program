#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter two numbers: "<<endl;
	cin>>n1>>n2;
	
	int hcf=1;
	for(int i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf = i;
		}
	}
	cout<<"HCF = "<<hcf<<endl;
}
