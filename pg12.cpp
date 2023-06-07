
#include<iostream>
using namespace std;
int main()
{
	int marks;
	char grade;
	float fees;
	cout<<"\n enter marks:";
	cin>>marks;	
	if(marks>35)
	{
		cout<<"\n enter grade:";
		cin>>grade;
		if(grade>='A' && grade <='D')
		{
			cout<<"\n eligible";
			cout<<"\n enter fees:";
			cin>>fees;
			if(fees>8000)
			{
				cout<<"\n Welcome";
			}
		}
	}
}
