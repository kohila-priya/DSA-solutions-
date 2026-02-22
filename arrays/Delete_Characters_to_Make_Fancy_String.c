/*
Problem: Delete Characters to Make Fancy String
Link: https://leetcode.com/problems/delete-characters-to-make-fancy-string/
Approach: Build Result String (Avoid 3 Consecutive Same Characters)
Time: O(n)
Space: O(n)
*/

char* makeFancyString(char* s) {
    
    int n = strlen(s);
    int k = 0;  // index for result string
    
    char* res = (char*)malloc((n + 1) * sizeof(char));
    
    for(int i = 0; i < n; i++) {
        
        // skip if last two characters are same as current
        if(k >= 2 && res[k - 1] == s[i] && res[k - 2] == s[i]) {
            continue;
        }
        
        res[k++] = s[i];
    }
    
    res[k] = '\0';  // null terminate
    return res;
}