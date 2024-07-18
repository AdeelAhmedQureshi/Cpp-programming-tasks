#include<iostream>
#include<string>
using namespace std;

int main()
{
	int no_of_students;
	int no_of_tests;
	float sum=0;
	float score,ave;
	cout<<"This Program Averages Test Scores. \n";
	cout<<"How many students do you haves scores ? ";
	cin>>no_of_students;
	
	cout<<"How many test scores does each student have ? ";
	cin>>no_of_tests;

	
	for(int i=1;i<=no_of_students;++i)
	{
		sum=0;
		for(int j=1;j<=no_of_tests;++j)
		{
			cout<<"Enter score "<<j<<" for student "<<i<<" : ";
			cin>>score;
			sum=sum+score;
		
		}
		ave=(sum/no_of_tests);
		cout<<"The Average for student "<<i<<" : "<<ave;
		cout<<endl<<endl;
	}	
	
return 0;
}


