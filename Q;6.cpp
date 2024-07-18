// Author : Adeel Ahmed Qureshi
// Program name : lab 9 string
#include <iostream>
#include <string>
using namespace std ;

string	my_upper(string);
int main()
{
	string sentence;
	cout<<"Enter any sentence: ";
	getline(cin,sentence);
	//pass string to function
	string str = my_upper(sentence);
	
	cout<<"String in Lower Case: ";
	cout<<str<<endl;
	

 system("PAUSE") ;
 return 0 ;
}

string	my_upper(string str)
{
	for(int i=0;i<str.length(); ++i)    //str.length = no of characters.
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	return str;
}




