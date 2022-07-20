#include<iostream>
using namespace std;

int first(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==key)
    {
        return 0;
    }
    int subindex=first(arr+1,n-1,key);
    if(subindex!=-1)
    {
          return subindex+1;
    }
    return -1;
}
int last(int arr[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int subindex=last(arr+1,n-1,key);
    if(subindex==-1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
        
    }
    else
    {
       return subindex+1;
    }
    return -1;
    
}

int main()
{
    int arr[]={1,5,4,7,8};
    cout<<last(arr,5,4);
    return 0;
}