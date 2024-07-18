#include <iostream>
#include <string>
using namespace std ;

int main()
{
	
	int a,b;
	cout<<"Enter any integer Value: ";
	cin>>a;
	b=a%2;
	
	switch(b)
	{
		case 0:
			cout<<"It is Even number."<<endl;
			break;
		case 1:
			cout<<"It is Odd number."<<endl;
			break;
		case -1:
			cout<<"It is Odd number."<<endl;
			break;
		default:
			cout<<"Invalid entry!"; 
	}


	system("PAUSE") ;
	return 0 ;
}
	

