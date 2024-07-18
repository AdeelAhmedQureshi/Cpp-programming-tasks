#include <iostream>
using namespace std;
void even_or_odd(int);
int main()
{
	int num;
	cout<<"enter any integer : ";
	cin>>num;
	
	even_or_odd(num);
	
return 0;
}


void  even_or_odd(int a)
{
	if(a%2==0)
	{
		cout<<"the number is even ";
	}
	else 
	{
		cout<<"the number is odd ";
	}
}
