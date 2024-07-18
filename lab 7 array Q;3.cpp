// Author : Adeel Ahmed Qureshi
// Program name : Lab 07 arrays.
#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int array[10];
	double sum=0;
	double ave=0;
	
	array[0]=34;
	array[1]=67;
	array[2]=354;
	array[3]=674;
	array[4]=834;
	array[5]=507;
	array[6]=77;
	array[7]=340;
	array[8]=167;
	array[9]=627;
	
	for(int i=0; i<10; ++i)
	{
		sum+=array[i];
	}
	ave=sum/10;
	cout<<"Average of values of array "<<ave<<endl;
	
 system("PAUSE") ;
 return 0 ;
}

