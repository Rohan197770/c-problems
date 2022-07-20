#include<iostream>
#include<vector>
using namespace std;


void print_helper(const vector<int> &arr,vector<int> output,int curren)
{
    if(curren==arr.size())
    {
         for(auto ele : output)
             cout<<ele<<" ";
         cout<<endl;
        return;
    }

    print_helper(arr,output,curren+1);
    output.push_back(arr[curren]);
    print_helper(arr,output,curren+1);
}

void print(vector<int> &arr)
{
    vector<int> output;
    int curren=0;
     print_helper(arr,output,curren);

}


int main()
{
    vector<int> arr;
    
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(7);
    print(arr);
    return 0;
}