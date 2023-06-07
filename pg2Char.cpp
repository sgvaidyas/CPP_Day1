#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n Enter the character = ";
	cin>>ch;
	cout<<"\n Entered character = "<<ch;
	
	string name;
	cout<<"\n Enter the name = ";
	cin>>name;
	cout<<"\n Entered name = "<<name;
	
	string fullname;
	cout<<"\n Enter the fullname = ";
	cin.ignore();
	getline(cin,fullname);
	cout<<"\n Entered name = "<<fullname;
}
