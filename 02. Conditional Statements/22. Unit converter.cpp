#include<iostream>
using namespace std;

int main()
{
    cout<<"---Unit Converter---\n";
    cout<<"\n1.Kilometers to meters.\n";
    cout<<"2.Meters to centimeters.\n";
    cout<<"3.Centimeters to millimeters.\n";
    cout<<"4.Exit.\n";
    cout<<endl;
    
    float value;
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    
    switch(choice)
    {
        case 1 : {cout<<"Enter value in km: ";
                  cin>>value;
                  cout<<"Value in meters is: "<<value*1000;
                  break;}
        case 2 : {cout<<"Enter value in meters: ";
                  cin>>value;
                  cout<<"Value in cm is: "<<value*100;
                  break;}
        case 3 : {cout<<"Enter value in cm: ";
                  cin>>value;
                  cout<<"Value in mm is: "<<value*10;
                  break;}
         case 4 : {cout<<"Exit.";
                   break;}
         
         default : {cout<<"Invalid choice";}
         }
         
     return 0;
 }                            