#include <iostream>
#include <string>
using namespace std ;

int main()
{
	float a,b;
	char c;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<" Now Enter any of the operands(+,-,*, / ): ";
	cin>>c;
	
	if (c=='+')
		cout<<"Operation was plus and the value is "<<a+b<<endl;
	if (c=='-')
		cout<<"Operation was minus and the value is "<<a-b<<endl;
	if (c=='*')
		cout<<"Operation was multiplication and the value is "<<a*b<<endl;
	if (c=='/')
		cout<<"Operation was division and the value is "<<a/b<<endl;
	if ((c!='+')&&(c!='-')&&(c!='*')&&(c!='/'))
		cout<<"Invalid operator"<<endl;
		
	
	
	
	
	
	
	system("PAUSE") ;
	return 0 ;
}
	

