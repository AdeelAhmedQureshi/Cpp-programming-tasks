#include <iostream>
using namespace std;
void max(int, int);
int main()
{
	int num1,num2;
	cout<<"enter any integer : ";
	cin>>num1;
	cout<<"enter another integer : ";
	cin>>num2;
	
	max(num1,num2);
	
return 0;
}


void max(int a,int b)
{
	if(a>b)
	{
		cout<<"the greater number is : "<<a;
	}
	else if (b>a)
	{
		cout<<"the greater number is : "<<b;
	}
	else 
	{
		cout<<"both numbers are equal.";
	}
}
