/*
Problem: Goal Parser Interpretation
Link: https://leetcode.com/problems/goal-parser-interpretation/
Approach: String Traversal and Pattern Matching
Time: O(n)
Space: O(n)
*/

class Solution {
public:
    string interpret(string command) {
        string res="";
        int len=command.size();
        for(int i=0;i<len;i++)
        {
            if(command[i]=='G')
                res+='G';
            else if(command[i]=='(' && command[i+1]==')')
                res+='o';
            else if(command[i]=='(' && command[i+1]=='a')
                res+="al";
        }

        return res;
    }
};