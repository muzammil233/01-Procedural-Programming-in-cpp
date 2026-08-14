// Second largest without sorting.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"How many numbers you want to check : ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers.\n";
    int largest = 0;
    int s_largest = largest;
    
    for(int i=1; i<=n; i++)
    {
        int num;
        cout<<"Enter number "<<i<<" : ";
        cin>>num;
        
        if(num>largest)
        {
            s_largest = largest;
            largest = num;
        }
        else if(num>s_largest && num != largest)
        {
            s_largest = num;
        }    
        
    }
    cout<<"largest Number : "<<largest<<endl;
    cout<<"Second largest : "<<s_largest;
    return 0;
}