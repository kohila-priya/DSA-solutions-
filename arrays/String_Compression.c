/*
Problem: String Compression
Link: https://leetcode.com/problems/string-compression/
Approach: Two Pointers (Read & Write with Count Conversion)
Time: O(n)
Space: O(1)
*/

int compress(char* chars, int charsSize) {
    
    int i = 0;
    int write = 0;  // position to write compressed output
    
    while(i < charsSize) {
        
        char curr = chars[i];
        int count = 0;
        
        // count consecutive characters
        while(i < charsSize && chars[i] == curr) {
            count++;
            i++;
        }
        
        chars[write++] = curr;  // write character
        
        if(count > 1) {
            char buffer[10];
            int len = sprintf(buffer, "%d", count);  // convert count to string
            
            for(int j = 0; j < len; j++) {
                chars[write++] = buffer[j];  // write digits
            }
        }
    }
    
    return write;  // new length
}