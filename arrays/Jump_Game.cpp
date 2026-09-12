/*
Problem: Jump Game
Link: https://leetcode.com/problems/jump-game/
Approach: Greedy (Track the farthest reachable index)
Time: O(n)
Space: O(1)
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
       int farthest=0;
       for(int i=0;i<nums.size();i++)
       {
        if(i>farthest)
         return false;
        farthest=max(farthest,i+nums[i]);
       } 
    return true;
    }
};