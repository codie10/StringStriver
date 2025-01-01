
#include <bits/stdc++.h>
using namespace std;
vector<int>concatarray(vector<int>&arr,int n)
{
    vector<int>ans(2*n);
    for(int i=0;i<n;i++)
    {
        ans[i]=arr[i];
        ans[i+n]=arr[i];
    }
    return ans;
}
int main() {
    
 vector<int>arr={1,2,2};
  int n=arr.size();
vector<int>res=concatarray(arr,n);
for(int i=0;i<res.size();i++)
{
  cout<<res[i]<<" ";
}
  
    return 0;
}
