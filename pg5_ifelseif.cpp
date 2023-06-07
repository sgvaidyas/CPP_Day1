/*
0 - <35  FAIL
35 - <60 Pass class
60 - <80 Second class
80 <=100 First class


Logical
AND &&
OR  ||
NOT !
 
*/

#include<iostream>
using namespace std;
int main()
{	
	float m1,m2,m3,total,avg;
	cout<<"\n Enter Marks1 = ";
	cin>>m1;
	cout<<"\n Enter Marks2 = ";
	cin>>m2;
	cout<<"\n Enter Marks3 = ";
	cin>>m3;
	total = m1+m2+m3;
	avg = total /3;
	cout<<"\n Total = "<<total<<endl;
	cout<<"\n AVG = "<<avg<<endl;
	
	if( avg>=0 && avg<35)
		cout<<"\n FAIL ";
	else if(avg>=35 && avg<60)
		cout<<"\n PASS CLASS ";
	else if(avg>=60 && avg<80)
		cout<<"\n SECOND CLASS ";
	else if(avg>=80 && avg<=100)
		cout<<"\n FIRST CLASS ";
	else
		cout<<"\n Invalid";
}
	
	
