#include <iostream>
using namespace std;
double per(double, double);
int main()
{
	double obt_marks,total_marks,perc;
	cout<<"enter your obtained marks : ";
	cin>>obt_marks;
	cout<<"enter the total marks : ";
	cin>>total_marks;
	
	perc = per(obt_marks,total_marks);
	cout<<"the percentage is : "<<perc;
return 0;
}


double per(double a, double b)
{
	return (a/b)*100;
}
