#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int a=0,b=1;
	int next_num=a+b;
	
	cout<<"The 10 numbers of fibonacci series::"<<endl<<endl;
	cout<<a<<","<<b<<",";
	int i=1;
	while (i<=34)
	{
		cout<<i<<",";
		a=b;
		b=next_num;
		next_num=a+b;
		i=next_num;
	}
	

	system("PAUSE") ;
	return 0 ;
}
	

