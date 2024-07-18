#include <iostream>
using namespace std;
double per(double, double);
void grade(double);
int main()
{
	double obt_marks,total_marks,perc;
	cout<<"enter your obtained marks : ";
	cin>>obt_marks;
	cout<<"enter the total marks : ";
	cin>>total_marks;
	
	perc = per(obt_marks,total_marks);
	cout<<"the percentage is : "<<perc<<endl;
	
	grade (perc);
	
	
return 0;
}


double per(double a, double b)
{
	return (a/b)*100;
}

void grade(double a)
{
	if(a>=80 && a<=100)
	cout<<"the grade is : A ";
	else if(a>=70 && a<80)
	cout<<"the grade is : B ";
	else if (a>=60 && a<70)
	cout<<"the grade is : C ";
	else 
	cout<<"the grade is : F";
}
