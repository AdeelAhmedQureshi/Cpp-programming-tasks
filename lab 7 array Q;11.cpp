// Author : Adeel Ahmed Qureshi
// Program name :
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int n
	int min_value=INT_MAX;  //INT_MAX =2147483647
	int arr[n];
	int temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>arr[i];
		if(arr[i]<min_value)
			min_value=arr[i];	
	}
	cout<<endl;
/*	for(int i=0;i<n;++i)
	{
		for(int j=i+1; j<n; ++j)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}

	cout<<endl;
	cout<<"The smallest number is : "<<arr[0]<<endl;
*/
	cout<<"\nThe smallest number is: "<<min_value<<endl;	
	
	

 system("PAUSE") ;
 return 0 ;
}

