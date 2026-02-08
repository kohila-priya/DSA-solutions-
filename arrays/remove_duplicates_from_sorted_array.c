/*
Problem: Remove Duplicates from Sorted Array
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Approach: Two pointers
Time: O(n)
Space: O(1)
*/

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }

    int k = 1; // first element is always unique

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
