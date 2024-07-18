#include<iostream>
#include<string>
using namespace std;

int main()
{
	int outer_loop=5;
	int inner_loop=5;
	
	for (int i=1;i<=outer_loop;++i)
	{
		for (int j=1;j<=inner_loop;++j)
		{	
			cout<<j<<" ";
		}
		cout<<endl;
	}


return 0;
}

