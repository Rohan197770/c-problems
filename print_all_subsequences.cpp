#include<iostream>
#include<vector>
using namespace std;


void print_subsequence(int i,const vector<int> arr,int n,vector<int> output)
{
     if(i>=n)
     {
         for(auto x:output)
         {
             cout<<x<<" ";
         }
          if(output.size()==0)
         {
             cout<<"NULL";
         }
         cout<<endl;
        
         return;
     }
     output.push_back(arr[i]);
     print_subsequence(i+1,arr,n,output);
     output.pop_back();
     print_subsequence(i+1,arr,n,output);
}

int main()
{
   vector<int> arr={3,2,1};
   vector <int> output;
   print_subsequence(0,arr,3,output);
}