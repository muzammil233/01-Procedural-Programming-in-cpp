// Smallest and largest numbers.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers to check: ";
    cin>>n;
    
    int i = 1;
    int num;
    cout<<"Enter number 1: ";
    cin>>num;
    int smallest = num;
    int largest = num;
    
    while(i<n)
    {
        
        cout<<"Enter number "<<i+1<<": ";
        cin>>num;
        if(num>=largest)
         {
             largest = num;
         }
        if(num<=smallest)
        {
            smallest = num;
         }
         
         
         i++;
     }
     
     cout<<"Smallest: "<<smallest<<endl;
     cout<<"Largest : "<<largest;
     
     return 0;
             
}                