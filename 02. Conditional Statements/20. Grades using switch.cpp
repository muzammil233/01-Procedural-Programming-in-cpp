// Rating the performance based on grade entered.
#include<iostream>
using namespace std;

int main()
{
    char grade;
    cout<<"Enter your grade (A , B , C , D , F) : ";
    cin>>grade;
    
    switch(grade)
    {
        case 'A' : {cout<<"Excellent";
                          break;}
        case 'B' : {cout<<"Good";
                          break;}
        case 'C' : {cout<<"Average";
                          break;}
        case 'D' : {cout<<"Weak";
                          break;}
        case 'F' : {cout<<"fail";
                          break;}
        default : { cout<<"invalid grade!";}
    }
        
        return 0;
}        