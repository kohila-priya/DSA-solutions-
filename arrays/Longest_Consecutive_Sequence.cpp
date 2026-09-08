/*
Problem: Longest Consecutive Sequence
Link: https://leetcode.com/problems/longest-consecutive-sequence/
Approach: Sorting (Sort the array and count consecutive elements)
Time: O(n log n)
Space: O(1)
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int count=1;
        int longest=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                continue;
            }
            else if(nums[i]==nums[i-1]+1)
            {
                count++;
            }
            else
            {
                count=1;
            }
            if(count>longest)
            {
                longest=count;
            }
        }
        return longest;
    }
};