#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int num;
	float a;
	float max_no, min_no;
	cout<<"How many numbers do you have? > ";
	cin>>num;
	if (num<0)
		cout<<"Sorry, You have entered an invalid input.\n Thank you. "<<endl;
	else if (num==0)
		cout<<"Opps, You don't have any number for me to process. \n Thank you. "<<endl;
	else if (num>0)
		for (int i=1;i<=num;++i)
		{
			cout<<"Please enter a number_"<<i<<"-->";
			cin>>a;
			if (i==1)
			{
				max_no=a;
				min_no=a;
			}
			else
			{
				if (a>max_no)  //in above first iteration max_no=a
				{
					max_no=a;   // other iterations, value of max_no changes w.r.t input of > number
				}
				else if (a<min_no)  // same case in minimum variable.
				{
					min_no=a;
				}
			}
		}	
		
		cout<<endl<<endl<<endl;
		cout<<"The lowest number is: "<<min_no<<endl;
		cout<<"The highest number is: "<<max_no<<endl;
		cout<<"Thank you."<<endl;
		


	system("PAUSE") ;
	return 0 ;
}
	

