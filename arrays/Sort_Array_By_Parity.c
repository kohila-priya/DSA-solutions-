/*
Problem: Sort Array By Parity
Link: https://leetcode.com/problems/sort-array-by-parity/
Approach: Two Pass (First store even numbers, then odd numbers)
Time: O(n)
Space: O(n)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    
    int* res = (int*)malloc(numsSize * sizeof(int));
    int k = 0;  // index for result array
    
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] % 2 == 0) {
            res[k++] = nums[i];  // store even numbers
        }
    }
    
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] % 2 != 0) {
            res[k++] = nums[i];  // store odd numbers
        }
    }
    
    *returnSize = numsSize;
    return res;
}