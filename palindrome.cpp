#include <iostream>
using namespace std;

int main()
{
    //check palindrome

    int n; 
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;// 1 means true

    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check=0;// 0 means false
            break;
        }
    }

    if(check==true)
    {
        cout<<"the character is palindrome"<<endl;
    }
    else
    {
        cout<<"the character is not palindrome"<<endl;
    }
    

    return 0;


}