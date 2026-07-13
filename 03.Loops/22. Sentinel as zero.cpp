// Keep taking numbers until user enters 0 , then print sum of numbers.
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;
    
    int sum = 0;
    
    while(num!=0)
    {
        cout<<"Enter number : ";
        cin>>num;
        sum = sum + num;
      }
      
      cout<<"Sum of given numbers : "<<sum;
      
      return 0;
 }        