/*
Problem: Jump Game II
Link: https://leetcode.com/problems/jump-game-ii/
Approach: Greedy (Track the farthest reachable index within the current jump)
Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int jump(vector<int>& nums) {
       int jump=0;
       int end=0;
       int farthest=0;
       for(int i=0;i<nums.size()-1;i++)
       {
        farthest=max(farthest,i+nums[i]);
        if(i==end)
        {
            jump++;
            end=farthest;
        }
       } 
       return jump;
    }
};