#include <iostream>
#include <string>
using namespace std;

int func (string);
int main()
{
	string sentence;
	cout<<"Enter the sentence: ";
	getline(cin,sentence);
	
//	int length=sentence.length();
//	cout<<" No. of character in sentence: "<<length<<endl;
	//function call and pass a string to function.
	int words=func(sentence);
	cout<<"The No. of words in the sentence are: "<<words+1<<endl;

system ("pause");
return 0;
}

int func (string str)
{	
	int words=0;
	for(int i=0;str[i]!='/0' ; ++i)
	{
		if (str[i]=' ')
		words++;
	}
	
	return words;
}
