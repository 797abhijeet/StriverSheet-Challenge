#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	// Write your code here.

      sort(nums.begin(),nums.end());
      for(int i =0;i<n;i++){
      if(nums[i]==nums[i+1]){
          return nums[i];
        }
    }
}
