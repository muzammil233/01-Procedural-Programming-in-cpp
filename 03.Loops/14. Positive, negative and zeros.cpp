//Positive , negative and zeros counts.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers to enter: ";
    cin>>n;
    int positiveCount =0;
    int negativeCount = 0;
    int zeroCount = 0;
    
    int num;
    cout<<"Enter number 1: ";
    cin>>num;
    
    int i = 1;
    
    while(i<n)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>num;
        
        if(num>0)
        {
            positiveCount++;
         }
         else if(num<0)
         {
             negativeCount++;
         }
         else
         {
             zeroCount++;
          }
          
          i++;
     }
     
     cout<<"\nPositive Numbers: "<<positiveCount<<endl;
     cout<<"Negative Numbers: "<<negativeCount<<endl;
     cout<<"Zeros: "<<zeroCount;
     
     return 0;
     
}                    