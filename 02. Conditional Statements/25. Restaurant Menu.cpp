#include<iostream>
using namespace std;

int main()
{
    cout<<"---Restaurant Menu---\n";
    cout<<"\n1.Burger.\n";
    cout<<"2.Pizza.\n";
    cout<<"3.Fries.\n";
    cout<<"4.Cold Drink.\n";
    cout<<"5.Exit.\n";
    cout<<endl;
    
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    int price;
    
    switch(choice)
    {
        case 1 : {cout<<"Burger.";
                  price = 350;
                  cout<<"\nPrice: Rs."<<price;
                  break;}
        case 2 : {cout<<"Pizza.";
                  price = 1000;
                  cout<<"\nPrice: Rs."<<price;
                  break;}
        case 3 : {cout<<"Fries.";
                  price = 150;
                  cout<<"\nPrice: Rs."<<price;
                  break;}
        case 4 : {cout<<"Cold Drink.";
                  price = 100;
                  cout<<"\nPrice: Rs."<<price;
                  break;}
        case 5 : {cout<<"Exit.";
                  break;}
         default : {cout << "Invalid choice!" << endl;} 
         }  
         
     return 0;
  }             