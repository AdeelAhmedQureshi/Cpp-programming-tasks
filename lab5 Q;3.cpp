#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the range upto which the loop should run: ";
	cin>>num;
	for (int i=0;i<=num;i++)
	{
		if (i%2== 0)
			cout<<i<<endl;
	
	}

return 0;
}

