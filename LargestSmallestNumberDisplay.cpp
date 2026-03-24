#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cout<<"Enter the digit: "<<endl;
	cin>>n;
	int largest=0;
	int smallest=0;
	largest=smallest=n;
	
	do{
		cout<<"Do you want to continue(y/n)? "<<endl;
		cin>>ch;
		if(ch == 'y'|| ch == 'Y')
		{
			cout<<"Enter the digit: "<<endl;
	        cin>>n;
	        if(n>largest){
	    	largest=n;
		   }
		    else if(n<smallest){
			smallest=n;
		   }
	    }
		   
	}
	while(ch == 'y'|| ch == 'Y');
	cout<<"Largest numbers: "<<largest<<endl;
	cout<<"Smallest numbers: "<<smallest<<endl;
}
