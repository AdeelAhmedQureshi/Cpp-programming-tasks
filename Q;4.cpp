// Author : Adeel Ahmed Qureshi
// Program name : lab 9 string
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	string fname;
	string lname;
	string email="@iba-suk.edu.pk";
	cout<<"Enter your first name: ";
	getline(cin,fname);
	cout<<"Enter your last name: ";
	getline(cin,lname);
	cout<<"Your Email Address is: "<<fname+"."+lname+email<<endl;


 system("PAUSE") ;
 return 0 ;
}

