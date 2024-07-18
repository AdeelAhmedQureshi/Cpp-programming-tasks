#include <iostream>
#include <string>

using namespace std;

int main()
{
	int count=0;
	string str1,str2;
	cout<<"Enter any string to check that it is palindrome or nor: ";
	getline(cin,str1);
	int len=str1.length();
	len=len-1;

	str2=str1;

	for(int i=0,j=len; i<len; ++i,--j)
	{
		if(str1[i]!=str2[j])
			count+=1;
	}
	if(count>0)
	cout<<"The string is NOT palindrome! \n";
	else
	cout<<"Yes, string is palindrome.\n";



return 0;
}

