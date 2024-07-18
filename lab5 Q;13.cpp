#include <iostream>
#include <string>
using namespace std ;

int main()
{
	int a=10;
	int num;
	
	cout<<"The Actual number is b/w (1-100): "<<endl;
	cout<<"You have only 5 Attempts. "<<endl;
	cout<<"\n============================\n";
	
	for (int i=1;i<=5;++i)
	{
		cout<<"Guess the number. Enter your guess: ";
		cin>>num;
		
		if(num<a)
		{
			cout<<"Entered number is smaller than the actual number "<<endl;
			num<a;
		}
		
		else if(num>a)
		{	cout<<"Entered number is greater than the actual number "<<endl;
			num>a;
		}
		
		else if(num==a)
		{
			cout<<"Congrats! You guessed it "<<endl;
			num=a;
			i=6;
		}
	
	}	
	if (num!=a)
	cout<<"Sorry ! , The Number is: "<<a<<endl;


	system("PAUSE") ;
	return 0 ;
}
	

