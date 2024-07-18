// Author = Adeel.Ahmed.Q
// Program = lab 8
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main ()
{
	int search;
	int arr[10];
	int *ptr;
	ptr=arr;
	
	for(int i=0; i<10; ++i)
	{
		cout<<"Enter value of array "<<i+1<<" : ";
		cin>>*(ptr+i);
	}
	cout<<endl;
	for(int i=0;i<10;++i)
	{
		cout<<*(ptr+i)<<" ";
	}
	cout<<endl;
	cout<<"Search any value: ";
	cin>>search;
	for(int i=0;i<10;++i)
	{
		if(*(ptr+i)==search)
		cout<<"The number is at index["<<i<<"] is: "<<*(ptr+i)<<endl;
	}
	
	
	
	


system ("PAUSE");
return 0;
}

