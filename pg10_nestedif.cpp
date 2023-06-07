/*
nested if else

*/

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter a, b , c ";
	cin>>a>>b>>c;	
	if(a>b) 
	{
		//a is greater
		if(a>c)
			cout<<"a is greater "<<a<<endl;
		else
			cout<<"c is greater "<<c<<endl;
	}
	else
	{
		//b is greater
		if(b>c)  
			cout<<"b is greater "<<b<<endl;
		else
			cout<<"c is greater "<<c<<endl;
	}	
}
