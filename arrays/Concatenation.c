/*
Problem: Concatenation of Array
Link: https://leetcode.com/problems/concatenation-of-array/
Approach: Create new array of size 2n and copy elements twice
Time: O(n)
Space: O(n)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    
    int* result = (int*)malloc((numsSize * 2) * sizeof(int));
    int k = 0, n = 2;  // n=2 to copy array twice
    
    while(n > 0) {
        for(int i = 0; i < numsSize; i++) {
            result[k++] = nums[i];  // copy elements
        }
        n--;
    }
    
    *returnSize = numsSize * 2;
    return result;
}
