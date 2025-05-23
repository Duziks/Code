#include<bits/stdc++.h> 
#include<vector>
#include<cmath>

using namespace std;

int main( )
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left=1;
    int right=1;
    int result=0;
    for(int i=0;i<n-1;i++)//涉及到i+1这种小心越界 
    {
        if(arr[i]>arr[i+1]) 
        {
            right+=1;
            result=(result>max(left,right))?result:max(left,right);
            left=1;
        }
        if(arr[i]<arr[i+1]) 
        {
            left+=1;
            result=(result>max(left,right))?result:max(left,right);
            right=1;
        }
        if(arr[i]==arr[i+1]) 
        {   
            left+=1;
            right+=1;
            result=(result>max(left,right))?result:max(left,right);
            
        }   
    }
    cout<<result;
    return 0;
}