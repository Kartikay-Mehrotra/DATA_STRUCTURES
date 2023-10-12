// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;



void bubbleSort(vector<int>& nums)
{
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size()-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            swap(nums[j],nums[j+1]);
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
bubbleSort(nums);
   print(nums);

    return 0;
}