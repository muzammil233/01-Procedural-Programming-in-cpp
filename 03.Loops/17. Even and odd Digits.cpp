// Even and odd Digits.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter many digits number: ";
    cin>>n;
    int evenCount = 0;
    int oddCount = 0;
    
        while(n!=0)
    {    
        int a = n % 10;
         if(a%2==0)
         {
             evenCount++;
          }
          else
          {
              oddCount++;
           }      
        n = n / 10;
        
     }
     cout<<"Even Digits : "<<evenCount<<endl;
     cout<<"Odd Digits: "<<oddCount;
     
     return  0;    
}    