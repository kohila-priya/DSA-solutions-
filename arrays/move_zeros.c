/*
Problem: Move Zeroes
Link: https://leetcode.com/problems/move-zeroes/
Approach: Two Pointer (Overwrite non-zero elements, fill rest with 0)
Time: O(n)
Space: O(1)
*/

void moveZeroes(int* nums, int numsSize) {
    
    int k = 0;  // position to place next non-zero element
    
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            nums[k] = nums[i];  // shift non-zero forward
            k++;
        }
    }
    
    for(int i = k; i < numsSize; i++) {
        nums[i] = 0;  // fill remaining positions with zero
    }
}
