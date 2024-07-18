// Author : Adeel Ahmed Qureshi
// Program name : Lab 07 arrays.
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int array1[6];
	int array2[6];
	int array3[6];
	
	array1[0]=5 ;
	array1[1]=43 ;
	array1[2]=70 ;
	array1[3]=9 ;
	array1[4]=30 ;
	array1[5]=6 ;
	
	array2[0]=10 ;
	array2[1]=23 ;
	array2[2]=22 ;
	array2[3]=95 ;
	array2[4]=71 ;
	array2[5]=67 ;

	cout<<"\nThe values of the first array are: \n";
	for(int i=0; i<6; ++i)
	{
		cout<<array1[i]<<" ";
	}
	cout<<"\nThe values of the second array are: \n";
	for(int i=0; i<6; ++i)
	{
		cout<<array2[i]<<" ";
	}
	for(int j=0, i=0; j<6; ++j,++i)
	{
		array3[j]=array1[i] + array2[i];
	}
	cout<<"\nThe values of the third array are: \n";
	for(int j=0; j<6; ++j)
	{
		cout<<array3[j]<<" ";
	}
	cout<<endl;
 system("PAUSE") ;
 return 0 ;
}

