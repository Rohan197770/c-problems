// to find hcf
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
        int rem;// using euclid algorithm
        a%b==rem;
        a=b;
        b=rem;
    }

    return a; 
}
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b);

    return 0;
}