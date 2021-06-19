// sum of number upto n in recursive method
#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    int presum = sum(n-1);// calling the same function
    return n+ presum;
}
int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}