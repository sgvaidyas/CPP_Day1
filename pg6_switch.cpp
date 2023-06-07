#include<iostream>
using namespace std;
int main()
{	
	int ch;
	cout<<"\n 1 Burger \n 2 Pizza \n 3 Wraps \n 4 Exit ";
	cout<<"\n Enter the choice = ";
	cin>>ch;
	switch(ch)
	{
		case 1:cout<<"\n Pay 100 ";
			   break;
		default:cout<<"\n Invalid choice ";
		        break;
		case 2:cout<<"\n Pay 200 ";
			   break;
		case 3:cout<<"\n Pay 150 ";
			   break;
		case 4:	cout<<"\n exiting....\n";
			   break;
		
	}
	
}
