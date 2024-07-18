# include<iostream> 
# include<string> 
using namespace std; 
int main() 
{ 
	float english,math,coding,ict,ps,total,marks,per; 
	cout<<"Enter English marks: ";
	cin>>english;
	cout<<"Enter Math marks: ";
	cin>>math;
	cout<<"Enter Fundamantal coding marks: ";
	cin>>coding;
	cout<<"Enter ICT marks: ";
	cin>>ict;
	cout<<"Enter PS marks: ";
	cin>>ps;
	
	marks=english+math+coding+ict+ps;
	per=(marks/500)*100;
	cout<<"\n Total marks: 500 ";
	cout<<"\n Obtained marks: ";
	cout<<marks<<endl;
	
	cout<<"Percentage is: "<<per<<" % "<<endl;
	if (per>=90) cout<<" A1 grade"; 
	if (per>80 && per<89) cout<<" A grade"; 
	if (per>70 && per<79) cout<<" B grade"; 
	if (per>60 && per<69) cout<<" C grade"; 
	if (per<60) cout<<" F grade"; 
	return 0; 
}
