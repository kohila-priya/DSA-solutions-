/*
Problem: Find Numbers with Even Number of Digits
Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
Approach: Digit Counting
Time: O(n * d)
Space: O(n)
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len=nums.size();
        vector<int> res(len);
       for(int i=0;i<len;i++)
       {
        int count=0;
        int num=nums[i];
        while(num>0)
        {
            count++;
            num/=10;
        }
        res[i]=count;
       } 
       int even=0;
       for(int i=0;i<len;i++)
       {
        if(res[i]%2==0)
        {
            even++;
        }
       }
       return even;
    }
};