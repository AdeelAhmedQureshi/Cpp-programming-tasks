// Author : Adeel Ahmed Qureshi
// Program name : Lab 07 arrays.
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int array1 [5];
	int array2 [5];
	
	array1[0]=99;
	array1[1]=30;
	array1[2]=40;
	array1[3]=50;
	array1[4]=99;

	for(int i=0; i<5; ++i)
	{
		array2[i]=array1[i];
	}
	cout<<"The values of first array are: \n";
	for(int i=0; i<5; ++i)
	{
		cout<<array1[i]<<" ";
	}
	cout<<"\nThe value of second array are: \n";
	for(int j=0; j<5; ++j)
	{
		cout<<array2[j]<<" ";
	}
	cout<<endl;

 system("PAUSE") ;
 return 0 ;
}

