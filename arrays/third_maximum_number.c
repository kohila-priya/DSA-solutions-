/*
Problem: Third Maximum Number
Link: https://leetcode.com/problems/third-maximum-number/
Approach: Single Pass (Track Top 3 Distinct Maximums)
Time: O(n)
Space: O(1)
*/

int thirdMax(int* nums, int numsSize) {
    
    int max = nums[0];
    long smax = LONG_MIN, tmax = LONG_MIN;  // use long to handle edge cases
    
    for(int i = 1; i < numsSize; i++) {
        
        if(nums[i] > max) {
            tmax = smax;
            smax = max;
            max = nums[i];
        }
        else if(nums[i] < max && nums[i] > smax) {
            tmax = smax;
            smax = nums[i];
        }
        else if(nums[i] < smax && nums[i] > tmax) {
            tmax = nums[i];
        }
    }
    
    if(tmax == LONG_MIN)
        return max;  // if third max doesn't exist, return maximum
    
    return tmax;
}
