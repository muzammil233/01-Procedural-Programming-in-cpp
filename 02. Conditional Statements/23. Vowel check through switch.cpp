#include<iostream>
using namespace std;

int main()
{
    char choice;
    cout<<"Enter a character: ";
    cin>>choice;
    if(choice>=65 && choice<=122)
    {
    
    switch(choice)
    {
        case 'A' : 
        case 'a' : 
        case 'E' :
        case 'e' :
        case 'I' :
        case 'i' :
        case 'O' :
        case 'o' :
        case 'U' :
        case 'u' : {cout<<"'"<<choice<<"'"<< "is a vowel.";
                    break;}
        default : {cout<<"'"<<choice<<"'"<<" a consonant.";}            
        
     }   
        }
     else
     {
         cout<<"\nInvalid choice!\n";
         cout<<choice<<" is not an alphabet.";
      }
      
      return 0;
}            