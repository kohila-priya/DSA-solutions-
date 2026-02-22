/*
Problem: House Robber
Link: https://leetcode.com/problems/house-robber/
Approach: Dynamic Programming (Optimized Space)
Time: O(n)
Space: O(1)
*/

int rob(int* nums, int numsSize) {
    
    int prev1 = nums[0];  // max profit till previous house
    int prev2 = 0;        // max profit till house before previous
    
    for(int i = 1; i < numsSize; i++) {
        
        // recurrence: max(prev1, prev2 + current house)
        int curr = (prev2 + nums[i] > prev1 ? prev2 + nums[i] : prev1);
        
        prev2 = prev1;
        prev1 = curr;
    }
    
    return prev1;  // maximum amount that can be robbed
}