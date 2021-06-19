#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];// taking input

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>arr[i][j];
        }
        
    }
    
    cout<<"Matrix is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)// giving output
        {
            cout<<arr[i][j]<<" ";
        }
         cout<<"\n";

    }

    int x;
    cin>>x;


    bool flag=false;//seraching a matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<i<<" "<<j<<"\n";
                flag=true;
            }
            
        }
        
    }
    if (flag)
    {
        cout<<"Element is found\n";
    }
    else
    {
        cout<<"Element is not found\n";
    }
    
 return 0;      
    
}