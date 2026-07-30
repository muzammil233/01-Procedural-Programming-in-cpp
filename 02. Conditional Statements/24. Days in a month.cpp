#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout<<"Enter your choice(1-12): ";
    cin>>choice;
    
    switch(choice)
    {
        case 1 : 
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10:
        case 12: {cout<<"This month has 31 days.";
                  break;}
        case 2 : {cout<<"This month has 28 or 29 days.";
                  break;}
        case 4 :
        case 6 :
        case 9 :
        case 11: {cout<<"This month has 30 days.";
                  break;}
        default : {cout<<"Invalid choice!";}
        
        }
    return 0;                                  
 }       