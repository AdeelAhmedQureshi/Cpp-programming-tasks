#include <iostream>
using namespace std;
bool even_or_not(int);
int main()
{
	int num;
	cout<<"enter any integer to check whether it is even or not : ";
	cin>>num;
	
	bool check=even_or_not(num);
	if(check==true)
	cout<<"the number is even.";
	else 
	cout<<"the number is not even.";
	
return 0;
}

bool even_or_not(int a)
{
	bool even;
	if(a%2==0)
	even=true;
	else
	even=false;
	return even;
}
