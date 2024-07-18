#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char c;
	cout<<"Enter num1: ";
	cin>>a;
	cout<<"Enter num2: ";
	cin>>b;
	cout<<"Select any one operator (+,-,*,/) ";
	cin>>c;
	switch (c){
	
		case '+' :
			cout<<"The operator is addition: Ans is "<<a+b<<endl;
			break;
		case '-' :
			cout<<"The operator is subraction: Ans is "<<a-b<<endl;
			break;
		case '*' :
			cout<<"The operator is multiplication: Ans is "<<a*b<<endl;
			break;
		case '/' :
			cout<<"The operator is division: Ans is "<<a/b<<endl;
			break;	
		default:
			cout<<"Entered operator is Invalid!"<<endl;	
		}
system("PAUSE");
return 0;
}


