#include<iostream>
using namespace std;

int main()
{    
    int n;
    cout<<"Enter a number:";
    cin>>n;
    
    int i;
    cout<<"Enter value of i:";
    cin>>i;
    int num = i;
    
    while(num <= n)
    {
        cout<<num<<" ";
        
        num++;
    }
    
    
    return 0;
}    