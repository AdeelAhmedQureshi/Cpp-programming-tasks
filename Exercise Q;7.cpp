#include <iostream>
using namespace std ;

int main()
{
	float english,math,fp_lab,ict,pak_study;
	float total_marks,obt_marks,per;
	total_marks=500;
	cout<<"	each subject marks (0-100) "<<endl;
	cout<<"	Total marks of 5 subjects: "<<total_marks<<endl<<endl;
	cout<<"Enter the marks of English:   ";cin>>english;
	cout<<"Enter the marks of Math:      ";cin>>math;
	cout<<"Enter the marks of FP_Lab:    ";cin>>fp_lab;
	cout<<"Enter the marks of ICT:       ";cin>>ict;
	cout<<"Enter the marks of Pak-study: ";cin>>pak_study;
	
	cout<<endl<<endl;
	
	obt_marks=(english+math+fp_lab+ict+pak_study);
	per=(obt_marks/total_marks)*100;
	
	cout<<"Obtained marks are:   "<<obt_marks<<endl;
	cout<<"Percentage is:        "<<per<<" % "<<endl;
	
	
	
	
	system("PAUSE") ;
	return 0 ;
}
	

