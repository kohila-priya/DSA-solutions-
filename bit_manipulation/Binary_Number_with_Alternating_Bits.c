/*
Problem: Binary Number with Alternating Bits
Link: https://leetcode.com/problems/binary-number-with-alternating-bits/
Approach: Bit Manipulation
Time: O(log n)
Space: O(1)
*/

bool hasAlternatingBits(int n) {
    
    int prev = n & 1;
    n = n >> 1;
    
    while(n > 0) {
        int curr = n & 1;
        if(curr == prev) {
            return false;
        }
        prev = curr;
        n = n >> 1;
    }
    
    return true;
}