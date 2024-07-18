#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the range upto which the loop should run: ";
	cin>>num;
	for (int i=1;i<=num;i++)
	{
		if (i%2== 0)
		{
			cout<<i<<" is Even"<<endl;
		}
		else
		{
			cout<<i<<" is Odd"<<endl;
		}
	}
	cout<<"End of Program"<<endl;




return 0;
}

