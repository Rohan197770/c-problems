#include <iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Nmaste"<<endl;
        break;
    case 'c':
        break;
        cout<<"salut"<<endl;
        break;
        case 'd':
        cout<<"hola"<<endl;
        break;
        case 'e':
        cout<<"ciao"<<endl;
        break;
        

        default:
        cout<<"I am still learning"<<endl;
        break;
  
    }
    return 0;
}