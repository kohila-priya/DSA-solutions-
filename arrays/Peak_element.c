/*
Problem: Find Peak Element
Link: https://leetcode.com/problems/find-peak-element/
Approach: Linear Scan (Track maximum element index)
Time: O(n)
Space: O(1)
*/

int findPeakElement(int* nums, int numsSize) {
    
    int peak = nums[0];
    int max = 0;  // store index of current maximum
    
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > peak) {
            peak = nums[i];
            max = i;
        }
    }
    
    return max;  // index of peak element
}
