// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>& nums)
{
   int size=nums.size();
   for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

  
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
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
