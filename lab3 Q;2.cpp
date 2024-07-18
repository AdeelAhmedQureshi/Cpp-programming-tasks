# include<iostream> 
# include<string> 
using namespace std; 
int main() 
{ 
	float per; 
	cout<<"Enter the percentage: (%) "; 
	cin>>per;
	if (per>=90) cout<<" A1 grade"; 
	if (per>80 && per<89) cout<<" A grade"; 
	if (per>70 && per<79) cout<<" B grade"; 
	if (per>60 && per<69) cout<<" C grade"; 
	if (per<60) cout<<" F grade"; 
	return 0; 
}
