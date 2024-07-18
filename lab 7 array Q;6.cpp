// Author : Adeel Ahmed Qureshi
// Program name : Lab 07 arrays.
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int n,num;
	int array[n];
	
	cout<<"Enter the size of array: ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter the value "<<i+1<<" : ";
		cin>>array[i];
	}
		
	cout<<endl;
	cout<<"The values on the ODD indices are: \n";
	for(int i=0; i<n; ++i)
	{
		if(i % 2!=0)
		cout<<array[i]<<" ";
	}
	cout<<endl;
	
	
 system("PAUSE") ;
 return 0 ;
}

