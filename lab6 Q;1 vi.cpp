#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int a=5;
	for(int i=1;i<=5;++i)
	{
		for(int j=1; j<=a; ++j)
		{
			cout<<"*"<<" ";
		}
		a=a-1;
		cout<<endl;
	}


	system("PAUSE") ;
	return 0 ;
}
	

