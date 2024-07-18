#include <iostream>
using namespace std;

int main()
{
	int tab;
	cout<<"Enter Table number to print its table: ";
	cin>>tab;
	for(int i=1;i<=10;i++)
	{
		cout<<tab<<" * "<<i<<" = "<<tab*i<<endl;	
	}
	
	
	return 0;
}
