// Author = Adeel.Ahmed.Q
// Program = lab 8
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void Swap(int *ptr1, int *ptr2)
{
	*ptr1= *ptr1 + *ptr2;
	*ptr2= *ptr1 - *ptr2;
	*ptr1= *ptr1 - *ptr2;
}
int main ()
{
	int a=45, b=59;
	
	cout<<"Before calling the functio:\n";
	cout<<" a is = "<<a<<" , b is = "<<b<<endl;
	// now we call the function 
	Swap(&a,&b);
	cout<<"After calling the functio:\n";
	cout<<" a is = "<<a<<" , b is = "<<b<<endl;



system ("PAUSE");
return 0;
}

