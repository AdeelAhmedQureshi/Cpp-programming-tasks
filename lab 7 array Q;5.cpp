// Author : Adeel Ahmed Qureshi
// Program name : Lab 07 arrays.
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int n,num;
	int array[n];
	int even_array[n];

	cout<<"Enter the size of array: ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter the value "<<i+1<<" : ";
		cin>>array[i];
	}
		
	cout<<endl;
	cout<<"Even numbers are: \n";
	for(int j=0; j<n; ++j)
	{
		if(array[j] % 2==0)
		cout<<array[j]<<" ";
	}
	cout<<endl;
	
	
 system("PAUSE") ;
 return 0 ;
}

