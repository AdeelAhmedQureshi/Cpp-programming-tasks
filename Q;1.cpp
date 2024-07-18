#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	string date;
	cout<<"Enter the date in this format (DD/MM/YYYY):  ";
	getline(cin,date);
	
	string day=date.substr(0,2);   	//variable= str_name.substr(start,Length/no.characters).
	string month=date.substr(3,2);
	string year=date.substr(6,4);
	
	cout<<day<<endl;
	cout<<month<<endl;
	cout<<year<<endl;

system ("pause");
return 0;
}



