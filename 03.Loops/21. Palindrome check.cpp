// Palindrome check.
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    
    int rev = 0;
    
    while(num!=0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
     }
     
     if(num==rev)
     {
         cout<<"The number is palindrome.";
      }
      else
      {
          cout<<"The number is not a palindrone.";
      }
      
      return 0;
 }               