#include <iostream>
#include <string>
using namespace std ;

int main()
{	int a=1;
	for(int i=1;i<=5;++i)
	{
		for(int j=i;j<=5;++j)
		{
			cout<<j<<" ";
		}
		
		cout<<endl;
		++a;
	}


	system("PAUSE") ;
	return 0 ;
}
	

