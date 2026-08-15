// Smallest and largest digit.

#include<iostream>
using namespace std;

int main()
{
    
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(; num!=0 ; num = num / 10)
    {
        int a = num % 10;
        if(a<smallest)
        {
            smallest = a;
        }
        if(a>largest)
        {
            largest = a;
        }
        
    }
      cout<<"Smallest digit : "<<smallest<<endl;
      cout<<"Largest digit : "<<largest;
                
    return 0;
}