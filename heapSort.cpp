
#include <bits/stdc++.h>
using namespace std;

void heapSort(vector<int>& nums)
{
   int n=nums.size();
        for(int i=1;i<n;i++)
        {
            int ch=i;
            while(ch>0)
            {
                int par=(ch-1)/2;
                if(nums[par]<nums[ch])
                {
                    swap(nums[par],nums[ch]);
                }
                else
                break;

                ch=par;
            }
        }
        int size=n;
        while(size>1){
        swap(nums[0],nums[size-1]);
        size--;
        int par=0;
        int lef=par*2+1;
        int rig=par*2+2;
        while(lef<size)
        {
            int mini=par;
            if(nums[mini]<nums[lef])
            mini=lef;
            if(rig<size && nums[mini]<nums[rig])
            mini=rig;
            if(mini==par)
            break;

            swap(nums[mini],nums[par]);
            par=mini;
            lef=2*par+1;
            rig=2*par+2;
        }
        }
}
void print(vector<int>&nums)
{
    for(auto i:nums)
    cout<<i<<" ";
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
   heapSort(nums);
   print(nums);

    return 0;
}