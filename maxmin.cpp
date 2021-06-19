#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<=n;i++)
    {
        cin>>array[i];
    }

    int max=array[0];
    int min=array[n];

    for(int i=0;i<n;i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        else if (array[i]<min)
        {
            min=array[i];
        }
        
        
    }

    cout<<max<<" "<<min<<endl;

    return 0;
}