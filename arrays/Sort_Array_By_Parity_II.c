/*
Problem: Sort Array By Parity II
Link: https://leetcode.com/problems/sort-array-by-parity-ii/
Approach: Two Pointers (Place even at even index, odd at odd index)
Time: O(n)
Space: O(1)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    
    int i = 0;  // even index pointer
    int j = 1;  // odd index pointer
    int t = 0;  // temp for swapping
    
    while(i < numsSize && j < numsSize) {
        
        if(nums[i] % 2 == 0) {
            i += 2;  // correct even position
        }
        else if(nums[j] % 2 == 1) {
            j += 2;  // correct odd position
        }
        else {
            // swap misplaced even and odd
            t = nums[i];
            nums[i] = nums[j];
            nums[j] = t;
        }
    }
    
    *returnSize = numsSize;
    return nums;
}