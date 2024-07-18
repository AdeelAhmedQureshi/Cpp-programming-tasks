// Author : Adeel Ahmed Qureshi
// Program name :
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	
	int n,search;
	int arr[n];
	cout<<"Enter the size of array: ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Enter the value which want to search from this array: ";
	cin>>search;
	for(int i=0;i<n;++i)
	{
		if(search==arr[i])
		cout<<arr[i]<<" is present in "<<i<<" index \n";
		else
			if(i==n-1)
			{
				cout<<arr[i]<<" is NOT present in the array \n";
			}
	} 	


 system("PAUSE") ;
 return 0 ;
}

