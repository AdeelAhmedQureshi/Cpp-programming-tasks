#include <iostream>
using namespace std;
int add(int);
int main()
{
	int num,sum;
	cout<<"enter range for the sum : ";
	cin>>num;
	
	sum=add(num);
	cout<<"the sum of all "<<num<<" positive integers is : "<<sum;
	
	
	
return 0;
}

int add(int a)
{
	int sum;
	for(int i=1;i<=a;i++)
	sum+=i;
	return sum;
	
}
