#include <iostream>
using namespace std;

int add(int a, int b);
int sub(int , int);
int divid(int , int);
int multi(int , int);
int modul(int , int);

int main() {
   int no1=0,no2=0,sum=0,divide=0,subt=0,multip=0,rem=0;
    cout<<"enter any number : ";
    cin>>no1;
    cout<<"enter another number : ";
    cin>>no2;
    
    sum = add(no1,no2);
    cout<<"the sum is : "<<sum<<endl;
    
    subt = sub(no1,no2);
    cout<<"the subtracion is : "<<subt<<endl;
    
    divide = divid(no1,no2);
    cout<<"the division is : "<<divide<<endl;
    
    multip = multi(no1,no2);
    cout<<"the multiplication is : "<<multip<<endl;
    
    rem = modul(no1,no2);
    cout<<"the remaider is : "<<rem<<endl;
    
    return 0;
}


int add(int a, int b)
{
    return(a+b);
}


int sub(int a, int b)
{
    return(a-b);
}

int divid(int a, int b)
{
    return(a/b);
}


int multi(int a, int b)
{
    return(a*b);
}

int modul(int a, int b)
{
    return(a%b);
}
