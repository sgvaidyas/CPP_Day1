#include<iostream>
using namespace std;
int main()
{	
	char ch;
	cout<<"\n Enter the (a-c) = ";
	cin>>ch;
	switch(ch)
	{
		case 'A':
		case 'a':cout<<"CASE a/A";break;
		case 'B':
		case 'b':cout<<"CASE b/B";break;
		case 'C':
		case 'c':cout<<"CASE c/C";break;
		default:cout<<"\n default";
	}
}
		
