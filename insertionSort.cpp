// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>& nums)
{
    for(int i=0;i<=nums.size()-1;i++)
    {
        int j=i;
        while(j>0 && nums[j-1]>nums[j])
        {
            swap(nums[j-1],nums[j]);
            j--;
        }
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
   insertionSort(nums);
   print(nums);

    return 0;
}