/*
Problem: Container With Most Water
Link: https://leetcode.com/problems/container-with-most-water/
Approach: Two Pointers
Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
      int h=0;
      int width=0;
      int left=0;
      int right=height.size()-1;
      int ans=0;
      while(right>left)
      {
        width=right-left;
        h=min(height[right],height[left]);
        ans=max(ans,width*h);
        if(height[left]>height[right])
        {
            right--;
        }
        else
        {
            left++;
        }
      }
      return ans;
    }
};