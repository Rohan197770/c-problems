#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
int sum=0;
int n=4;
    for(int i=0;i<4;i++)
    {
       sum= sum+ arr[i]*((n-i)*(i+1));
    }

    cout<<sum;
}