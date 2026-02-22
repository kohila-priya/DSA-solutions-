/*
Problem: House Robber II
Link: https://leetcode.com/problems/house-robber-ii/
Approach: Circular DP (Split into two linear cases)
Time: O(n)
Space: O(1)
*/

int split(int* nums, int start, int end) {
    
    int prev1 = 0;  // max till previous
    int prev2 = 0;  // max till before previous
    
    for(int i = start; i <= end; i++) {
        int curr = (prev2 + nums[i] > prev1 ? prev2 + nums[i] : prev1);
        prev2 = prev1;
        prev1 = curr;
    }
    
    return prev1;
}

int rob(int* nums, int numsSize) {
    
    if(numsSize == 1)
        return nums[0];
    
    // Case 1: Exclude last house
    int first = split(nums, 0, numsSize - 2);
    
    // Case 2: Exclude first house
    int last = split(nums, 1, numsSize - 1);
    
    return (first > last ? first : last);  // take maximum
}