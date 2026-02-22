/*
Problem: Delete and Earn
Link: https://leetcode.com/problems/delete-and-earn/
Approach: Frequency Array + House Robber DP
Time: O(n + maxValue)
Space: O(maxValue)
*/

int deleteAndEarn(int* nums, int numsSize) {
    
    int max = 0;
    
    // Find maximum value in array
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > max) {
            max = nums[i];
        }
    }
    
    // Create frequency (points) array
    int* points = (int*)calloc(max + 1, sizeof(int));
    
    for(int i = 0; i < numsSize; i++) {
        points[nums[i]] += nums[i];  // accumulate total points
    }
    
    // Apply House Robber DP on points array
    int prev1 = 0;
    int prev2 = 0;
    
    for(int i = 0; i <= max; i++) {
        int curr = (prev2 + points[i] > prev1 ? prev2 + points[i] : prev1);
        prev2 = prev1;
        prev1 = curr;
    }
    
    return prev1;  // maximum points
}