#include <iostream>
#include <string>

using namespace std ;

int main()
{
	float a,b;
	cout<<"Enter First number : ";
	cin>>a;
	
	cout<<"Enter Second number: ";
	cin>>b;
	
	if (a>b)
		cout<<" First number is greater than second "<<endl;
	if (b>a)
		cout<<" Second number is greater than first one "<<endl;
	if (a==b)
		cout<<" Both numbers are equal "<<endl;
	
		
	system("PAUSE") ;
	return 0 ;
}
	

