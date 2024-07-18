#include <iostream>
#include <string>
using namespace std ;

int main()
{
	cout<<"\n===== Program 1 by For loop ===== \n\n";
	
	for (int i=1,j=1;i<=55;++j,i+=j)
		{
			cout<<i<<" ";
		}
		
	cout<<"\n\n===== Program 2 by While loop ===== \n\n";
	
	int i=1,j=1;
	while (i<=55)	
		{
			cout<<i<<" ";
			
			++j;
			i+=j;
		}
		cout<<endl;
	system("PAUSE") ;
	return 0 ;
}
	

