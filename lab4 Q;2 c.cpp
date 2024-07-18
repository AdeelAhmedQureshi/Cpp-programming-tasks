#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int a;
	cout<<"Enter month number: ";
	cin>>a;
	switch (a)
	{
		case 1:
			cout<<"January , winter season"<<endl;
			break;
		case 2:
			cout<<"Febuary , winter season"<<endl;
			break;
		case 3: 
			cout<<"March , spring season"<<endl;
			break;
		case 4:
			cout<<"April , winter season"<<endl;
			break;
		case 5:
			cout<<"May , summer season"<<endl;
			break;
		case 6: 
			cout<<"June , summer season"<<endl;
			break;
		case 7:
			cout<<"July , summer season"<<endl;
			break;
		case 8:
			cout<<"August , summer season"<<endl;
			break;
		case 9: 
			cout<<"September , summer season"<<endl;
			break;
		case 10:
			cout<<"October , autumn season"<<endl;
			break;
		case 11:
			cout<<"November , autumn season"<<endl;
			break;
		case 12: 
			cout<<"December , autumn season"<<endl;
			break;
		default:
			cout<<"Invalid month number!"<<endl;
	}

	system("PAUSE") ;
	return 0 ;
}
	

