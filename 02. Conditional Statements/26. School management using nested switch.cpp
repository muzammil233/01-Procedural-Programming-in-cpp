#include<iostream>
using namespace std;

int main()
{
    cout<<"---School Management---\n";
    cout<<"\n1.Teacher.\n";
    cout<<"2.Student.\n";
    cout<<endl;
    
    int role;
    cout<<"Enter your role: ";
    cin>>role;
    
    switch(role)
    {
        
        case 1 : {cout<<"\n1.Enter Marks.\n";
                  cout<<"2.Take Attendance.\n";
                  int choice;  
                  cout<<"\nEnter your choice: ";
                  cin>>choice;
                  switch(choice)
                  {
                      case 1 : {cout<<"\nEntering marks...\n";
                                break;}
                      case 2 : {cout<<"\nTaking Attendance...\n";
                                break;}
                      default : {cout<<"Invalid choice.";}
                   }
                  break;}
                  
          case 2 : {cout<<"\n1.View Marks.\n";
                  cout<<"2.View Attendance.\n";
                  int choice;
                  cout<<"\nEnter your choice: ";
                  cin>>choice;
                  switch(choice)
                  {
                      case 1 : {cout<<"\nDisplaying Marks...\n";
                                break;}
                      case 2 : {cout<<"\nDisplaying Attendance...\n";
                                break;}
                      default : {cout<<"Invalid choice.";}
                  }
                  break;}   
                       
         default : {cout<<"Invalid Choice.";}
     }                
                                                   
   return 0;
}    