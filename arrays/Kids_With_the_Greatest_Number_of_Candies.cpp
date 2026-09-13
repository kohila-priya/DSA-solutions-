/*
Problem: Kids With the Greatest Number of Candies
Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
Approach: Find Maximum and Compare
Time: O(n)
Space: O(n)
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxx=0;
        vector<bool> result(n);
        for(int i=0;i<n;i++)
        {
           if(candies[i]>maxx)
           {
            maxx=candies[i];
           } 
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxx)
            {
                result[i]=true;
            }
            else
            {
                result[i]=false;
            }
        }
        return result;
    }
};