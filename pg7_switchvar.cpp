#include<iostream>
using namespace std;
int main()
{	
	char ch;
	cout<<"\n Enter the (1-4) = ";
	cin>>ch;
	switch(ch)
	{
		case '1':cout<<"CASE 1";break;
		case '2':cout<<"CASE 2";break;
		case '3':cout<<"CASE 3";break;
		case '4':cout<<"CASE 4";break;
		default:cout<<"\n default";
	}
}
		
