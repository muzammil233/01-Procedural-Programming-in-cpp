// Smallest and largest Digits.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter many digits number: ";
    cin>>n;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
        while(n!=0)
    {    
        int a = n % 10;
         if(a<smallest && smallest!=0)
         {
             smallest = a;
          }
          if(a>largest)
          {
              largest = a;
           }      
        n = n / 10;
        
     }
     cout<<"Smallest Digit : "<<smallest<<endl;
     cout<<"Largest Digit : "<<largest;
     
     return  0;    
}    