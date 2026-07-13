// Check whether 7 is present as a digit or not.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter many digits number : ";
    cin>>n;
    
    bool found = false;
    
    while(n!=0)
    {
        int a = n % 10;
        if(a==7)
        {
            found = true;
            break;
         }  
         n = n / 10;
     }
     if(found)
     {
         cout<<"There is a digit 7.";
      }
      else
      {
          cout<<"There is no digit 7.";
        }     
     
     return 0;
}         