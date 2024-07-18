#include <iostream>
using namespace std;
int printTable(int,int);

int main()
{
	int num,range;
	cout<<"enter any number to print its table : ";
	cin>>num;
	cout<<"enter the range for the table : ";
	cin>>range;
	
	printTable(num,range);
	
	
	
return 0;
}

int printTable(int a, int b)
{
	for(int i=1;i<=b;i++)
	{
		cout<<a<<"x"<<i<<" = "<<a*i<<endl;
	}
	
}

