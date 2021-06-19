// INput a number n and tell whether it is equal to,

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    if(n==10)
    {
        cout<<"Equal to ten"<<endl;
    }
    else if(n>10)
    {
        cout<<"more than ten"<<endl;
    }
    else {
        cout<<"less than ten"<<endl;
    }
    return 0;
}