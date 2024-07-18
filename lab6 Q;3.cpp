#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int range;
	cout<<"Enter the range up to which you want to find tables: ";
	cin>>range;
	
	for (int i=1;i<=range;++i)
	{
		for (int j=1;j<=10;++j)
		{
			cout<<j<<" * "<<i<<" = "<<j*i<<endl;
		}
		
		cout<<"\n=============\n"<<endl;
	}


	system("PAUSE") ;
	return 0 ;
}
	

