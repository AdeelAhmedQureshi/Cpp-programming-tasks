#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int num,sum;
	sum=0;
	
	cout<<"Enter any number: ";
	cin>>num;
	
	while (num>=0)
		{
			if (num<=30)
			{
			sum+=num;
			cout<<"Enter any number: ";
			cin>>num;
			}
			
			else if (num>30)
				{
					cout<<"The number is greater than 30 and won't be calculated: "<<endl;
					
					cout<<"Enter any number: ";
					cin>>num;
				}
		}
		
	cout<<"The Sum of Positive numbers is (<=30) : "<<sum<<endl;

	system("PAUSE") ;
	return 0 ;
}
	

