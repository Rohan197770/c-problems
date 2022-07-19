// finding factorial of number with help of recursion'
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prefac = factorial(n-1);
    return n*prefac;
}

int main()
{
    int n;
    cin>>n;
//
    cout<<factorial(n)<<endl;

    return 0;
}