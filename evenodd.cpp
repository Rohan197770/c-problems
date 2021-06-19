// find out wheather a given odd or even

#include<iostream>
using namespace std;

bool even(int n)
{
    if(n%2==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    if (even(n)==true)  
    {
        cout<<"even number";
    } 
    else
    {
        cout<<"odd number";
    }
    return 0;
    
}