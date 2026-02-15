/*
Problem: Search Insert Position
Link: https://leetcode.com/problems/search-insert-position/
Approach: Linear scan
Time: O(n)
Space: O(1)
*/

int searchInsert(int* nums, int numsSize, int target) {
   int k;
   for(int i=0;i<numsSize;i++)
   {
    if(nums[i]==target)
    {
        k=i;
        break;
    }
    else if(nums[i]>target)
    {
        k=i;
        break;
    }
   } 
    return k;
}
