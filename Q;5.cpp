// Author : Adeel Ahmed Qureshi
// Program name : lab 9 string
#include <iostream>
#include <string>
using namespace std ;

string	my_lower(string);
int main()
{
	string sentence;
	cout<<"Enter any sentence: ";
	getline(cin,sentence);
	//pass string to function
	string str = my_lower(sentence);
	
	cout<<"String in Lower Case: ";
	cout<<str<<endl;
	

 system("PAUSE") ;
 return 0 ;
}

string	my_lower(string str)
{
	for(int i=0;i<str.length(); ++i)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	return str;
}




