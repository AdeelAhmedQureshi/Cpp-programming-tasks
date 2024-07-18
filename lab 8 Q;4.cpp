// Author = Adeel.Ahmed.Q
// Program =
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main ()
{
	int arr[5]={34,345,675,456,97};
	int* ptr;
	ptr=arr;   // to initialize address of a arrays we usually not use '&' operator.
	
	for(int i=0;i<5;++i)
	{
		cout<<"Value of array Element "<<i+1<<" : "<<*(ptr+i)<<" , Address is: "<<(ptr+i)<<endl;
	} 




system ("PAUSE");
return 0;
}

