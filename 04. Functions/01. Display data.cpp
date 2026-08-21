#include<iostream>
using namespace std;

void display(string name , int rollNo , float marks)
{
    cout<<"\nName : "<<name<<endl;
    cout<<"Roll No. : "<<rollNo<<endl;
    cout<<"Marks : "<<marks<<endl;
 }   
int main()
{
    cout << "---Student Data---" << endl;
    display("Ahmed" , 15 , 86.7);
    
    return 0;
}