/*
Problem: Maximum Number of Words Found in Sentences
Link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
Approach: Count Spaces and Find Maximum
Time: O(n*m)
Space: O(n)
*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int len=sentences.size();
        vector<int> res(len);
        for(int i=0;i<len;i++)
        {
            int count=1;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                {
                    count++;
                }
            }
            res[i]=count;
        }
        int max=res[0];
        for(int i=1;i<len;i++)
        {
            if(res[i]>max)
            {
                max=res[i];
            }
        }
        return max;
    }
};