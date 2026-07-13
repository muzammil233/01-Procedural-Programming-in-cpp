// Keep taking numbers until user enters negative number , then print count of positive numbers.
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;
    
    int count = 0;
    
    while(num>=0)
    {
        cout<<"Enter number : ";
        cin>>num;
        count++;
      }
      
      cout<<"Count of positive numbers : "<<count;
      
      return 0;
 }        