// Author : Adeel Ahmed Qureshi
// Program name :
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int n;
	int max_value=INT_MIN;  //INT_MIN =  -2147483647
	int arr[n];
	int temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<"Enter value number "<<i+1<<" : ";
		cin>>arr[i];
		if(arr[i]>max_value)  
			max_value=arr[i];	
	}
/*	cout<<endl;
	for(int i=0;i<n;++i)
	{
		for(int j=i+1; j<n; ++j)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}

	cout<<endl;
	cout<<"The Largest number is : "<<arr[0]<<endl;
*/
	cout<<"\nThe Largest number is: "<<max_value<<endl;	
	
	

 system("PAUSE") ;
 return 0 ;
}

