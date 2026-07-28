// Simple calculator.
#include<iostream>
using namespace std;

int main()
{
    cout<<"\n1.Addition.\n";
    cout<<"2.Subtraction.\n";
    cout<<"3.Multiplication.\n";
    cout<<"4.Division.\n";
    
    int num1 , num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    
    int operator;
    cout<<"Enter the type of operation you want to perform:";
    cin>>operator;
    
    switch(operator)
    {
        case 1 : { cout<<"Addition:"<<num1+num2;
                    break;}
        case 2 : { cout<<"Subtraction:"<<num1-num2;
                    break;}
        case 3 : { cout<<"Multiplocation:"<<num1*num2;
                    break;}                        
        case 4 : { if(num2!=0)
                   {  cout<<"Division:"<<num1/num2;}
                   else
                   { cout<<"Error !";}
                    break;}
        default : { cout<<"Invalid choice ! ";}
        
        }
        
        return 0;
}       