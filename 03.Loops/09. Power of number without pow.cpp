//Power of a number without pow() function.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int p;
    cout<<"How many times you want to multiply "<<n<<": ";
    cin>>p;
    
    int pow = 1;
    int i = 1;
    
    while(i<=p)
    {
        pow = pow * n;
        
        i++;
     }
     
     cout<<"Multiplying "<<p<<" times "<<n<<" we get: "<<pow;
     
     return 0;
        
 }   