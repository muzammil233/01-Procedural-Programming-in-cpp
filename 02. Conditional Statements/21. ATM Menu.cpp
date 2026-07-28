// ATM menu.
#include<iostream>
using namespace std;

int main()
{
    cout<<"\n1.Check Balance.\n";
    cout<<"2.Deposit.\n";
    cout<<"3.Withdraw.\n";
    cout<<"4.Exit.\n";
    cout<<endl;
    
    double balance = 200000;
    double deposit = 0.0;
    double withdraw = 0.0;
    
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    switch(choice)
    {
        case 1 : {cout<<"Balance is: "<<balance;
                 break;}
                 
        case 2 : {cout<<"Enter the amount to deposit: ";
                  cin>>deposit;
                  balance = balance + deposit;
                  cout<<endl<<deposit<<" deposited"; 
                  cout<<"\nNew Balance is: "<<balance;
                 break;}
                 
        case 3 :  {cout<<"Enter the amount to withdraw: ";
                   cin>>withdraw;
                   balance = balance - withdraw;
                   cout<<endl<<withdraw<<" withdrawn";
                   cout<<"\nNew Balance is: "<<balance;
                   break;}
                   
       case 4 : {cout<<"Exit.";
                 break;}
                 
       default : {cout<<"Invalid choice ! ";}
           
       }
       return 0;
 }                 