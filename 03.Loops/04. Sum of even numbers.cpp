#include<iostream>
using namespace std;

int main()
{    
    int i = 2;
    int n;
    cout<<"Enter the limit: ";
    cin>>n;
    int sum = 0;
    while (i <= n)
    {
       sum = sum + i;
       
       i+=2;
     }
     
     cout<<"Sum of even numbers upto "<<n<<" is "<<sum;   
    
    return 0;
}    