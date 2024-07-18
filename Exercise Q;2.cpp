#include <iostream>
using namespace std ;

int main()
{
	int no,n1,n2,n3,n4,n5; 
	no=17869; 
	n1=no%10; // n1=9 no=no/10; 
	no=no/10; // no updated into no=1786 
	n2=no%10; //n2=6 
	no=no/10; //no updated into no=178
    n3=no%10; //n3=8 
	no=no/10; //no again updated into no=17 
	n4=no%10; //n4=7 
	no=no/10; // now no is no=1 
	n5=no;   // finally n5=no=1
    cout<<endl<<"		"<<n1<<endl;
    cout<<endl<<"		"<<n2<<endl;
    cout<<endl<<"		"<<n3<<endl; 
	cout<<endl<<"		"<<n4<<endl; 
	cout<<endl<<"		"<<n5<<endl;

	system("PAUSE") ;
	return 0 ;
}
	

