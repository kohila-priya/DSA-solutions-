/*
Problem: Single Number
Link: https://leetcode.com/problems/single-number/
Approach: Bit Manipulation (XOR)
Time: O(n)
Space: O(1)
*/

int singleNumber(int* nums, int numsSize) {
    int ans = 0;
    for(int i = 0; i < numsSize; i++) {
        ans ^= nums[i];
    }
    return ans;
}
