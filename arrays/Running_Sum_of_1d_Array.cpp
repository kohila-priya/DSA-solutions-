/*
Problem: Running Sum of 1d Array
Link: https://leetcode.com/problems/running-sum-of-1d-array/
Approach: Prefix Sum
Time: O(n)
Space: O(n)
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int len=nums.size();
       vector<int> res(len);
       int sum=nums[0];
       res[0]=sum;
       for(int i=1;i<len;i++)
       {
         sum+=nums[i];
         res[i]=sum;
       }
        return res; 
    }
};