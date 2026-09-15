/*
Problem: Final Value of Variable After Performing Operations
Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
Approach: String Traversal
Time: O(n)
Space: O(1)
*/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int val=0,j=1;
       for(int i=0;i<operations.size();i++)
       {
        if(operations[i][j]=='-')
        {
            val--;
        }
        else
        {
            val++;
        }
       } 
       return val;
    }
};