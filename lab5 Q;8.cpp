#include <iostream>
#include <string>
using namespace std; 


int main() {
    
    int i=1;
    int num;
    int total;
    int q_books=0,q_tshirt=0,q_shoes=0;
    int q1=0,q2=0,q3=0;
    float t1=0,t2=0,t3=0;
    float p1=0,p2=0,p3=0;

    
    while (i>0)
    {
        cout<<"1. Books (per item = 500)"<<endl;
        cout<<"2. T-shirt (per item = 700)"<<endl;
        cout<<"3. Shoes (per item = 1000)"<<endl;
        cout<<"0. Exit the program "<<endl;
        cout<<"Enter the number to select  product: ";
        cin>>num;
        
        if (num==1)
      {  cout<<"you have selected Books "<<endl;
        cout<<"Enter the Quantity: ";
        cin>>q_books;
        p1=q_books*500;
        q1=q1+q_books;
        t1=t1+p1;
        ++i;
      }
      
        else if  (num==2)
       {  cout<<"you have selected T-Shirt "<<endl;
         cout<<"Enter the Quantity: ";
         cin>>q_tshirt;
         p2=q_tshirt*700;
         q2=q2+q_tshirt;
         t2=t2+p2;
         ++i;
      }
      
        else if (num==3)
        {  cout<<"you have selected Shoes "<<endl;
         cout<<"Enter the Quantity: ";
         cin>>q_shoes;
         p3=q_shoes*700;
         q3=q3+q_shoes;
         t3=t3+p3;
         ++i;
        }
      
        else if (num==0) 
        {
            cout<<"You have bought "<<q1<<" Books (price = "<<t1<<")"<<endl;
            cout<<"You have bought "<<q2<<" T-Shirt (price = "<<t2<<")"<<endl;
            cout<<"You have bought "<<q3<<" Shoes (price = "<<t3<<")"<<endl;
            total=(t1+t2+t3);
            cout<<"total is: "<< total<<endl;
            i=(-1);
        }
        
           
    } 
      
   

    return 0;
}

