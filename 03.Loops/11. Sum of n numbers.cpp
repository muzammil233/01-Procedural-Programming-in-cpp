// Sum of n numbers.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers to add: ";
    cin>>n;
    
    int i = 1;
    int sum = 0;
    
    while(i<=n)
    {
        int num;
        cout<<"Enter Number: ";
        cin>>num;
        sum = sum + num;
        
        i++;
     }
     
     cout<<"Sum: "<<sum;
     
     return 0;
        
 }       