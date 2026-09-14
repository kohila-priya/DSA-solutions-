/*
Problem: Shuffle the Array
Link: https://leetcode.com/problems/shuffle-the-array/
Approach: Two-Part Array Traversal
Time: O(n)
Space: O(n)
*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int len=nums.size();
       vector<int> res(len);
       int k=0;
       for(int i=0;i<n;i++)
       {
            res[k]=nums[i];
            res[k+1]=nums[len-n+i];
            k+=2;
       } 
       return res;
    }
};