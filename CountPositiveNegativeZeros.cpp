#include<iostream>
using namespace std;
int main()
{
	int n;
	int positive=0;
	int negative=0;
	int zero=0;
	char ch;
	
	do{
		cout<<"Enter the digit: "<<endl;
	    cin>>n;
	    if(n>0){
	    	positive++;
		}
		else if(n<0){
			negative++;
		}
		else{
			zero++;
		}
		cout<<"Do you want to continue(y/n)? "<<endl;
		cin>>ch;
	}
	while(ch == 'y'|| ch == 'Y');
	cout<<"Positive numbers: "<<positive<<endl;
	cout<<"Negative numbers: "<<negative<<endl;
	cout<<"Zero numbers: "<<zero<<endl;
	
}
