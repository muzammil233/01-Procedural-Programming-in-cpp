// Reversed Number.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter many digits number: ";
    cin>>n;
    int rev = 0;
    
        while(n!=0)
    {    
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
        
     }
     cout<<"Reversed Number is : "<<rev;
     
     return      
}    