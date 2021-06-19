// to check the power of 2 in bit manipulation 
#include<iostream>
using namespace std;

bool ispower2(int n)
{
    return (n && !(n & (n-1)));
}
int main()
{
    cout<<ispower2(16)<<endl;

    return 0;
}