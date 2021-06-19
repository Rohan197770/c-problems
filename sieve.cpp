// print primenumber 

#include<iostream>
using namespace std;

void prime(int n)
{   
    int prime[100]={0};

    for(int i=2;i<=n;i++)
    {   
        if(prime[i]==0)// 0 means unmarked number
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;//1 menas marked number
            }
        }

    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    prime(n);

    return 0;


}