/*
Problem: String Compression III
Link: https://leetcode.com/problems/string-compression-iii/
Approach: Count Consecutive Characters (Max 9 per group)
Time: O(n)
Space: O(n)
*/

char* compressedString(char* word) {
    
    int charsSize = strlen(word);
    char* result = (char*)malloc(2 * charsSize + 1);
    
    int i = 0;
    int write = 0;
    
    while(i < charsSize) {
        
        int count = 0;
        char curr = word[i];
        
        // count up to 9 same consecutive characters
        while(i < charsSize && word[i] == curr && count < 9) {
            count++;
            i++;
        }
        
        char buffer[10];
        int len = sprintf(buffer, "%d", count);  // convert count to string
        
        for(int j = 0; j < len; j++) {
            result[write++] = buffer[j];
        }
        
        result[write++] = curr;
    }
    
    result[write] = '\0';
    return result;
}