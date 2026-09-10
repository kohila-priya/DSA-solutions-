/*
Problem: 3Sum Closest
Link: https://leetcode.com/problems/3sum-closest/
Approach: Sorting and Two Pointers
Time: O(n^2)
Space: O(1)
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      int result=nums[0]+nums[1]+nums[2];
      for(int i=0;i<n-2;i++)
      {
        int left=i+1,right=n-1;
        while(right>left)
        {
            int sum=nums[i]+nums[left]+nums[right];
            if(abs(target-sum)<abs(target-result))
            {
                result=sum;
            }
            else if(sum==target) return target;
            else if(sum>target) right--;
            else left++;
        }
      }
      return result;
    }
};