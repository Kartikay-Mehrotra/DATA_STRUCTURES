// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums,int left,int mid,int right)
{
    int size=right-left+1;
    vector<int> temp(size,0);
    int i=left;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=right)
    {
        if(nums[i]<nums[j])
        temp[k++]=nums[i++];
        else
        temp[k++]=nums[j++];
    }
    while(i<=mid)
    temp[k++]=nums[i++];
    while(j<=right)
    temp[k++]=nums[j++];
    
    for(int i=left;i<=right;i++)
    {
        nums[i]=temp[i-left];
    }
}

void mergeSort(vector<int>& nums,int left,int right)
{
    if(left>=right)
    return;
    int mid=(left+right)/2;
    mergeSort(nums,left,mid);
    mergeSort(nums,mid+1,right);
    merge(nums,left,mid,right);
}

void print(vector<int>& nums)
{
    for(auto i:nums)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    // Write C++ code here
   int n;
   cin>>n;
   vector<int> nums;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       nums.push_back(a);
   }
   cout<<"BEFORE SORTING"<<endl;
   print(nums);
  
   cout<<"AFTER SORTING"<<endl;
   mergeSort(nums,0,nums.size()-1);
   print(nums);

    return 0;
}