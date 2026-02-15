/*
Problem: Missing Number
Link: https://leetcode.com/problems/missing-number/
Approach: Bit Manipulation (XOR)
Time: O(n)
Space: O(1)
*/

int missingNumber(int* nums, int numsSize) {
    int ans = numsSize;
    for(int i = 0; i < numsSize; i++) {
        ans ^= i;        // values from 0 to n get XORed
        ans ^= nums[i];  // paired values cancel, missing number remains
    }
    return ans;
}
