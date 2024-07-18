#include <iostream>
using namespace std ;

int main()
{
	
	float a,b,c;
	cout<<" Enter the first number: ";
	cin>>a;
	cout<<" Enter the second number: ";
	cin>>b;
	cout<<" Enter the third number: ";
	cin>>c;
	
	if ((a>b)&(a>c))
		cout<<"\n The first number is the greatest "<<endl;
	if ((b>a)&(b>c))
		cout<<"\n The second number is the greatest "<<endl;
	if ((c>a)&(c>b))
		cout<<"\n The third number is the greatest "<<endl;
		
		
	
	system("PAUSE") ;
	return 0 ;
}
	

