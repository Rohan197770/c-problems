// checking array is sorted or not using recursion
#include <iostream>
using namespace std;
// using bool because we are only have to check
bool sorted(int arr[] ,int n)
{
    if (n==1)
    {
        return true;
    }
    bool restarray = sorted (arr+1, n-1);
    return (arr[0]<arr[1] && restarray);
}

int main()
{
    int arr[]={1,2,3,4,5};
    {
        cout<<sorted( arr , 5 );
    }

    return 0;
}