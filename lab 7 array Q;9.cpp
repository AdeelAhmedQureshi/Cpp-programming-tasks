#include <iostream>
using namespace std;

int main()
{
	int n=3, m=4;
	int j=0;
	int arr1[3]={34,55,67};
	int arr2[4]={92,43,88,7};
	
	
	cout<<"Values of first array are: \n";
	for(int i=0; i<n; ++i)
	{
		cout<<arr1[i]<<" ";
	}
	
	cout<<"\nValues of second array are: \n";
	for(int i=0; i<m; ++i)
	{
		cout<<arr2[i]<<" ";
	}
	
	cout<<"\nValues of third array are: ";
	for(int i=0; i<n+m; ++i)
	{
		if(i>=0 && i<n)
		cout<<arr1[i]<<" ";
		else
		{
			cout<<arr2[j]<<" ";
			j+=1;	
		}
	}
	
	
    return 0;
}

