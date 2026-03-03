/*
Problem: Max Consecutive Ones
Link: https://leetcode.com/problems/max-consecutive-ones/
Approach: Linear Scan (Count consecutive 1s)
Time: O(n)
Space: O(1)
*/

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    
    int count = 0;
    int max = 0;
    
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1) {
            count++;
        }
        else {
            if(max < count)
                max = count;
            count = 0;
        }
    }
    
    if(max < count)
        max = count;
    
    return max;
}