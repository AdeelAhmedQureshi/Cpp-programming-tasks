#include <iostream>
#include <string>
using namespace std;

int main()
{
	string phone;
	string code;
	cout<<"Enter the Phone number(like 0300-1234567): ";
	getline(cin,phone);
	code=phone.substr(0,4);
	
	if(code=="0300")
	cout<<"The network is Mobilink.\n";
	else if(code=="0333")
	cout<<"The network is Ufone.\n";
	else if(code=="0315")
	cout<<"The network is Zong.\n";
	else if(code=="0345")
	cout<<"The network is Telenor.\n";
	else
	cout<<"This network is Not present! \n";
	
	
system ("pause");
return 0;
}

