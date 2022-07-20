// finding nth  enacci number using recursion

#include <iostream>
using namespace std;

int enacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;// base case
    }
    return enacci(n-1) +enacci(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<enacci(n)<<endl;

    return 0;
}