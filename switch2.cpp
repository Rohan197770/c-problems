#include <iostream>
using namespace std;

int main()
{
    char ap;
    cout<< "Enter a alphabate: ";
    cin>>ap;

    switch (ap)
    {
    case 'a':
        cout <<" vowel"<< endl;
        break;
    case 'e':
        cout << "vowel"<< endl;
        break;
    case 'i':
        cout <<" vowel"<< endl;
        break;
    case 'o':
        cout << "vowel"<< endl;
        break;  
    case 'u':
        cout << "vowel"<< endl;
        break; 

    
    default:
        cout << "consonant" << endl;
        break;
    }

    return 0;

}