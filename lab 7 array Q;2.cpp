// Author : Adeel Ahmed Qureshi
// Program name : Lab 07 arrays.
#include <iostream>
#include <string>
using namespace std ;

int main()
{	
	int n;
	int sum=0;
	int array[n];
	
	cout<<"Enter the size of array ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter value of number "<<i+1<<" : ";
		cin>>array[i];
		sum+=array[i];
	}
	cout<<"The sum of all values of the array "<<sum<<endl;

 system("PAUSE") ;
 return 0 ;
}

