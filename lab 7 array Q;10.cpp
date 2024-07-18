#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of students: ";
	cin>>n;
	
	string name[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the name of student "<<i+1<<" : ";
		fflush(stdin);
		getline(cin,name[i]);
	}
	
	double sum_marks[n];
	double per[n];
	char grade[n];
	
	double eng[n];
	double math[n];
	double ict[n];
	double fp[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the marks(T.M=100 of each sub) of student "<<i+1<<" : \n";
		cout<<"enter English marks: ";
		cin>>eng[i];
		cout<<"enter Math marks: ";
		cin>>math[i];
		cout<<"enter Ict marks: ";
		cin>>ict[i];
		cout<<"enter FP marks: ";
		cin>>fp[i];
		sum_marks[i]=(eng[i]+math[i]+ict[i]+fp[i]);  //sum of all marks of student 1 index 0.
		per[i]=(sum_marks[i] / 400)*100;				// over all total marks of 4 sub: =400.
		
		if (per[i]>=80 && per[i]<=100)
		grade[i]='A';
		else if(per[i]>=70 && per[i]<=79)
		grade[i]='B';
		else if(per[i]>=60 && per[i]<=69)
		grade[i]='C';
		else if(per[i]<60)
		grade[i]='F';
	}
	cout<<endl;
	cout<<"\n=============================================================================================================================================\n";
	cout<<"Name      English       Math  	ICT     F.P     T.Obtained        Percentage  Grade";
	cout<<"\n=============================================================================================================================================\n";
	for(int i=0; i<n; ++i)
	{
		cout<<name[i]<<"         "<<eng[i]<<"    	"<<math[i]<<"      "<<ict[i]<<"      "<<fp[i]<<"      "<<sum_marks[i]<<"	       		"<<per[i]<<"%         "<<grade[i]<<endl;
	}
	
    return 0;
}

