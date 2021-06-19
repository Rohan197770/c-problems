#include<iostream>
using namespace std;

int main()
{
    string str = "rohan";

    // convert into upper case

    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')

            str[i] = str[i]-32;

    }
    cout<<str<<endl;

    // convert into lower case

    for(int i=0; i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')

        str[i] = str[i]+32;
    }

    cout<<str<<endl;


    return 0;


}