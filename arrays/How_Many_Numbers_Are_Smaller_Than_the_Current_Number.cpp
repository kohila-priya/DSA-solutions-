/*
Problem: How Many Numbers Are Smaller Than the Current Number
Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
Approach: Brute Force Comparison
Time: O(n^2)
Space: O(n)
*/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      int count=0,len=nums.size();
      vector<int> res(len);
      for(int i=0;i<len;i++)
      {
        count=0;
        for(int j=0;j<len;j++)
        {
            if(i!=j && nums[i]>nums[j])
            {
                count++;
            }
        }
        res[i]=count;
      } 
      return res; 
    }
};