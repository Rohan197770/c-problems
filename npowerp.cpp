// calculate n raised to power p
#include<iostream>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int pow=1;

    while (p !=0)
    {
        pow = pow* n;
        --p;
    }

    cout<<pow;
    return 0;
}