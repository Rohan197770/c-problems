// finding nth  fibenacci number using recursion

#include <iostream>
using namespace std;

int fibenacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;// base case
    }
    return fibenacci(n-1) +fibenacci(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<fibenacci(n)<<endl;

    return 0;
}