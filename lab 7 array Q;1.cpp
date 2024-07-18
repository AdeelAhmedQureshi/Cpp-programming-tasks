// Author : Adeel Ahmed Qureshi
// Program name : Lab 07 arrays.
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int n;
	int array[n];
	cout<<"Enter size of array--> ";
	cin>>n;
	
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter value of number "<<i+1<<" : ";
		cin>>array[i];
	}
	cout<<"The number in reverse order are: \n";
	for(int i=n-1; i>=0; --i)
	{
		cout<<array[i]<<"  ";
	}
	cout<<endl;
	
 system("PAUSE") ;
 return 0 ;
}

