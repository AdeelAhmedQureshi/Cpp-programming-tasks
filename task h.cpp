#include <iostream>
using namespace std;
int printTable(int);
int main()
{
	int num;
	cout<<"enter any number to print its table : ";
	cin>>num;
	
	printTable(num);
	
	
	
return 0;
}

int printTable(int a)
{
	for(int i=1;i<=10;i++)
	{
		cout<<a<<"x"<<i<<" = "<<a*i<<endl;
	}
	
}
