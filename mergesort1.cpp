#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
      {
          cout<<arr[i]<<" ";
      }
}

void merge(int arr[],int start,int mid,int last)
{
    int i=start,b[100];
    int j=mid+1;
    int k =start;

    while(i<=mid && j<=last)
    {
        if(arr[i]<arr[j])
        {
            b[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            k++;
        }
        
    }
    while(i<=mid)
    {
        b[k]=arr[i];
        i++;
        k++;
    }
     while(j<=last)
    {
       b[k]=arr[j];
       k++;
       j++;
    }

    for(int i=start;i<=last;i++)
    {
        arr[i]= b[i];
    }
    
  }
  void mergesort(int arr[],int start,int last)
  {
      if(start<last)
      {
           int mid= (start+last)/2;
          mergesort(arr,start,mid);
          mergesort(arr,mid+1,last);
          merge(arr,start,mid,last);

      }
  }
  int main()
  {
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      mergesort(arr,0,n-1);
      display(arr,n);
      return 0;
  }
