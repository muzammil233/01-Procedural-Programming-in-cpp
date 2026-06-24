#include<iostream>
using namespace std;

int main()
{
    float marks;
    cout<<"Enter marks: ";
    cin>>marks;
    
    double income;
    cout<<"Enter family income: ";
    cin>>income;
    
    if(marks>=90)
    {
        if(income<50000)
        {
            cout<<"100% scholarship";
         }
         else 
         {
             cout<<"50% scholarship";
          } 
      }    
     else if(marks>=80)
     {
         if(income<50000)
         {
             cout<<"50% scholarship";  
          }
          else
          {
              cout<<"25% scholarship";  
          }
       }
       
       else
       {
           cout<<"No scholarship";
        }               
        
    return 0;
}