#include<iostream>
using namespace std;

int deletes (int arr[],int n,int key)
{
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            break;
        }
    }
    if(i<n)
    {
        n=n-1;
        for(int j=i;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
    }
    return n;
}

int main()
{
    int arr[]={11,15,6,8,9,10};
    int key;
    cin>>key;
  int n=  deletes(arr,6,key);
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
    
    return 0;

}