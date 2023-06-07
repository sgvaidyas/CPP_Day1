#include<iostream>
using namespace std;
int main()
{	
	int ch;
	cout<<"\n Enter the num = ";
	cin>>ch;
	switch(ch)
	{
		case 1 ... 5:cout<<"CASE 1-5";break;
		case 6 ... 10:cout<<"CASE 6-10";break;
		case 11 ... 15:cout<<"CASE 11-15";break;
		default:cout<<"\n default";
	}
}
		
