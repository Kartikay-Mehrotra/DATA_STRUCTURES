
#include <bits/stdc++.h>
using namespace std;

int quick(vector<int>& nums,int low,int high)
{
    int pivot=nums[low];//starting element as pivot
    int i=low;
    int j=high;
    while(i<j)
    {
        while(i<high && nums[i]<=pivot)
        i++;
        while(j>low && nums[j]>pivot)
        j--;
        if(i<j)
        swap(nums[i],nums[j]);
    }
    swap(nums[low],nums[j]);//swap to its correct position
    return j;
}

void quickSort(vector<int>& nums,int low,int high)
{
    if(low<high)
    {
        int pivot_index=quick(nums,low,high);
        quickSort(nums,low,pivot_index-1);
        quickSort(nums,pivot_index+1,high);
    }
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
   quickSort(nums,0,nums.size()-1);
   print(nums);

    return 0;
}