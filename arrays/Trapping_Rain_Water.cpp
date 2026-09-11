/*
Problem: Trapping Rain Water
Link: https://leetcode.com/problems/trapping-rain-water/
Approach: Prefix Maximum and Suffix Maximum Arrays
Time: O(n)
Space: O(n)
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int len=height.size();
        vector<int> rt(len);
        vector<int> lt(len);
        int mx1=0,mx2=0,trap=0;
        for(int i=0;i<len;i++)
        {
            mx1=max(mx1,height[i]);
            lt[i]=mx1;
        }  
        for(int i=len-1;i>=0;i--)
        {
            mx2=max(mx2,height[i]);
            rt[i]=mx2;
        }
        for(int i=0;i<len;i++)
        {
            trap+=(min(lt[i],rt[i])-height[i]);
        }
        return trap;
    }
};