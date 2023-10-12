
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& nums)
{
    //THIS ONE IS UNSTABLE 
    int k=0;
    for(int i=0;i<nums.size();i++)
    {
        int mini=i;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]<nums[mini])
            mini=j;
        }
        swap(nums[k++],nums[mini]);
    }
}
void selectionSortStable(vector<int>& nums)
{
    for(int i=0;i<nums.size();i++)
    {
        int min=i;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]<nums[min])
            min=j;
        }
        int key=nums[min];
        for(int j=min;j>i;j--)
        {
            nums[j]=nums[j-1];
        }
        nums[i]=key;
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
   selectionSort(nums);
   cout<<"AFTER SORTING"<<endl;
   print(nums);
   cout<<"After STABLE SORTING"<<endl;
   selectionSortStable(nums);
   print(nums);

    return 0;
}