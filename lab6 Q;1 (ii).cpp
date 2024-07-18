#include <iostream>
#include <string>
using namespace std ;

int main()
{
	for(int i=1;i<=5;++i)
	{
		for(int j=1;j<=5;++j)
		{
			cout<<j*i;
			if((i*j)<=9)
			cout<<"  ";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	


	system("PAUSE") ;
	return 0 ;
}
	

