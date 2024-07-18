#include <iostream>
#include <string>
using namespace std ;

int main()
{
	float id,units;
	string name;
	
	cout<<"Enter name: ";
	getline (cin,name);
	
	cout<<"Enter customer ID no: ";
	cin>>id;
	
	cout<<"Enter units: ";
	cin>>units;
	
	if ((units>=1) && (units<=199))
		cout<<"Total Bill is Rs: "<<(units*5)<<endl;
	if ((units>=200) && (units<=399))
		cout<<"Total Bill is Rs: "<<(units*10)<<endl;
	if ((units>=400) && (units<=599))
		cout<<"Total Bill is Rs: "<<(units*15)<<endl;
	if (units>=600)
		cout<<"Total Bill is Rs: "<<(units*20)<<endl;
	
	
	
	

	
	
	system("PAUSE") ;
	return 0 ;
}
	

