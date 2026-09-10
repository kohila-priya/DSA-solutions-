/*
Problem: 3Sum
Link: https://leetcode.com/problems/3sum/
Approach: Sorting and Two Pointers
Time: O(n^2)
Space: O(1)
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        if(n<3) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
        int left=i+1;
        int right=n-1;
        while(right>left)
        {
            long long sum=(long long)nums[i]+(long long)nums[left]+(long long)nums[right];
            if(sum==0)
            {
                ans.push_back({nums[i],nums[left],nums[right]});
            while(left<right && nums[left]==nums[left+1])
            {
                left++;
            }
            while(left<right && nums[right]==nums[right-1])
            {
                right--;
            }
            left++;
            right--;
            }
            else if(sum<0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return ans;
    }
};