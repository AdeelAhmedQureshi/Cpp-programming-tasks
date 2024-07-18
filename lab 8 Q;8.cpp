// Author = Adeel.Ahmed.Q
// Program =
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct Student
{
	string name;
	int id;
	int mark[3];
};

void inputStudent(Student* ptr);
void disPlay(Student* ptr);

int main ()
{
	Student stu;
	Student* stuptr=&stu;	//defining a pointer for object
	
	inputStudent(&stu); 	// calling function to get input from function
	
	disPlay(&stu);			// calling the display function to print items.
	
system ("PAUSE");
return 0;
}

void inputStudent(Student *ptr)
{
	cout<<"Enter the name of student: ";
	getline(cin,ptr->name);
	cout<<"Enter the id of student: ";
	cin>>ptr->id;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter mark"<<i+1<<": ";
		cin>>*(ptr+i)->mark;
	}
}

void disPlay(Student* ptr)
{
	cout<<"Name of Student is: "<<ptr->name<<endl;
	cout<<"ID of Student is: "<<ptr->id<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Marks "<<i+1<<": "<<*(ptr+i)->mark<<endl;
	}
}
