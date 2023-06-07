/*
conditions: 
if else
if .. else if ...else
nested if else
switch

*/
#include<iostream>
using namespace std;
int main()
{	
	int a , b;
	cout<<"\n Enter the val of a and b = ";
	cin>>a>>b;
	
	if(a>b)
		cout<<"A is greater = "<<a<<endl;
	else if(a==b)
		cout<<"A is equal to b = "<<a<<endl;	
	else
		cout<<"B is greater = "<<b<<endl;
}

