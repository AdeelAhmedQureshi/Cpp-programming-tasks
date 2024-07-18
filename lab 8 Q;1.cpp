// Author = Adeel.Ahmed.Q
// Program = lab 8
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct student
{
	int id;
	string name;
	string dep;
	string email;
	string phone;
};

int main ()
{
	student s[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter id of student "<<i+1<<" : ";
		cin>>s[i].id;
		cout<<"Enter the Name of student "<<i+1<<" : ";
		fflush(stdin);
		getline(cin,s[i].name);
		cout<<"Enter the Department of student "<<i+1<<" : ";
		getline(cin,s[i].dep);
		cout<<"Enter the Email of student "<<i+1<<" : ";
		getline(cin,s[i].email);
		cout<<"Enter the Phone no: of student "<<i+1<<" : ";
		getline(cin,s[i].phone);
		cout<<endl;
	}
	cout<<"\n *	*	*	*	*	*	*	*	*	*	*	*	*	\n";
	for(int i=0;i<5;++i)
	{
		cout<<"The id of student "<<i+1<<" is: ";
		cout<<s[i].id<<endl;
		cout<<"The Name of student "<<i+1<<" : ";
		cout<<s[i].name<<endl;
		cout<<"The Department of student "<<i+1<<" : ";
		cout<<s[i].dep<<endl;
		cout<<"The Email of student "<<i+1<<" : ";
		cout<<s[i].email<<endl;
		cout<<"The Phone no: of student "<<i+1<<" : ";
		cout<<s[i].phone;
		cout<<"\n=====================================\n";
	}


system ("PAUSE");
return 0;
}

