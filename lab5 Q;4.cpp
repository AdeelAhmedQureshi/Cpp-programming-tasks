#include <iostream>
using namespace std;

int main() 
{
	int num;
	cout<<"Enter the range upto the loop should run: ";
	cin>>num;
	for (int i=1; i<=num; i++) 
		{
		if (i%5== 0)
			cout<<i<<endl;
			
		}



	return 0;
}

