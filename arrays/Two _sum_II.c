/*
Problem: Two Sum II - Input Array Is Sorted
Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Approach: Two Pointers (Since array is sorted)
Time: O(n)
Space: O(1)
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    
    int* result = (int*)malloc(2 * sizeof(int));
    int left = 0;
    int right = numbersSize - 1;
    
    while (left < right) {
        
        int sum = numbers[left] + numbers[right];
        
        if (sum == target) {
            result[0] = left + 1;   // 1-based indexing
            result[1] = right + 1;
            *returnSize = 2;
            return result;
        }
        
        if (sum < target)
            left++;      // increase sum
        else
            right--;     // decrease sum
    }
    
    *returnSize = 0;
    return 0;
}
