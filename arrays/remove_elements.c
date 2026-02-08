/*
Problem: Remove Element
Link: https://leetcode.com/problems/remove-element/
Approach: Two pointers / In-place replacement
Time: O(n)
Space: O(1)
*/

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
