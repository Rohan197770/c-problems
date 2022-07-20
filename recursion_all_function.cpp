#include<iostream>
using namespace std;

//print numbers N to1

void print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
//factorial
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n*fact(n-1);
}
//fibonacci
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
//reverse an array

void rev(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    swap(arr[start],arr[end]);
    rev(arr,start+1,end-1);
}
//linear search

bool find(int arr[],int n,int key,int current);
bool find_element(int arr[],int n,int key)
{
    int current=0;
   return  find(arr,n,key,current);
}
bool find(int arr[],int n,int key,int current)
{
    if(current>=n)
    {
        return false;
    }
    if(arr[current]==key)
    {
        return true;
    }
    return find(arr,n,key,current+1);
}
//binary serach
bool binary(int arr[],int start,int end,int key)
{
    int mid=(start+end)/2;
    if(start>end)
    {
        return false;
    }

    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]>key)
    {
        return binary(arr,start,mid-1,key);
    }
    if(arr[mid]<key)
    {
        return binary(arr,mid+1,end,key);
    }
    

    
}
int main()
{
    int arr[]={1,2,3,4,5};
  //cout<<  binary(arr,0,5,5);
  //cout<<find_element(arr,5,9);
 /* rev(arr,0,4);
  for(auto x: arr)
  {
      cout<<x<<" ";
  }
  */
 int n;
 cin>>n;
 //print(n);
 //cout<<fact(n);
 cout<<fib(n);
 
  return 0;
}
