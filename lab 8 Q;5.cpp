// Author = Adeel.Ahmed.Q
// Program =
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void bubbleSort(int *ptr,int s);
int main ()
{
	int arr[]={3,5,33,12,2,20,7};
	cout<<"Original / Unsorted array values: \n";
	for(int i=0;i<7;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	bubbleSort(arr,7);



system ("PAUSE");
return 0;
}

void bubbleSort(int *ptr,int s)
{
	int temp;
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(*(ptr+j)<*(ptr+i))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
			
		}
	}
	cout<<endl;
	cout<<"This is  Sorted array: \n";
	for(int i=0;i<s;++i)
	{
		cout<<*(ptr+i)<<" ";
	}
	cout<<endl;
	
	
}
