// Sum of n numbers.
// Average of n Numbers.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers to add: ";
    cin>>n;
    
    int i = 1;
    float sum = 0.0;
    float average = 0.0;
    
    while(i<=n)
    {
        int num;
        cout<<"Enter Number: ";
        cin>>num;
        sum = sum + num;
        
        i++;
     }
     average = sum / n;
     cout<<"Average : "<<average;
     
     return 0;
        
 }       