#include<iostream>
#include<string>
using namespace std;
int main()
{
	char id;
	string dep;
	cout<<"Do you have ID card ? (Y/N) ";
	cin>>id;
	
	if ((id=='n') ||(id=='N'))
		cout<<"You are not allowed to enter.";
	else if ((id=='y')||(id=='Y'))
		{
		cout<<"\nCS\nEE\nBBA\nEDU"<<endl;
		cout<<"What is your department name: ";
		cin>>dep;
		if ((dep=="CS")||(dep=="cs"))
			cout<<"Go to Block 1"<<endl;
		else if ((dep=="EE")||(dep=="ee"))
			cout<<"Go to Block 3"<<endl;
		else if ((dep=="BBA")||(dep=="bba"))
			cout<<"Go to Block 2"<<endl;
		else if ((dep=="EDU")||(dep=="edu"))
			cout<<"Go to Knowledge Center"<<endl;
		else
			cout<<"Does not match from options"<<endl;
			
			
	
		
		}
		

system("PAUSE");
return 0;
}



