// Author = Adeel.Ahmed.Q
// Program = lab 8
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct record
{
	string p_name;
	int m_num;
	double price;
};

void Display(record arr[10])
{
	for(int i=0; i<10; ++i)
	{
		cout<<"The name of Product "<<i+1<<" is: "<<arr[i].p_name<<endl;
		cout<<"The Model no. of Product "<<i+1<<" is: "<<arr[i].m_num<<endl;
		cout<<"The Price of Product "<<i+1<<" is: "<<arr[i].price<<endl;
		cout<<endl;
	}
}

int main ()
{
	record product[10];
	for(int i=0;i<10;++i)
	{
		cout<<"Enter the Name of Product "<<i+1<<" : ";
		getline(cin,product[i].p_name);
		cout<<"Enter the Model no. of Product "<<i+1<<" : ";
		cin>>product[i].m_num;
		cout<<"Enter the Price of Product "<<i+1<<" : ";
		cin>>product[i].price;	
		cout<<endl;
		fflush(stdin);
	}	
	cout<<"\n==================================\n";
	Display(product);


system ("PAUSE");
return 0;
}

