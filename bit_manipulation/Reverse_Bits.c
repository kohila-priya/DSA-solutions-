/*
Problem: Reverse Bits
Link: https://leetcode.com/problems/reverse-bits/
Approach: Bit Manipulation (Shift and Build Result)
Time: O(1)   // 32 iterations
Space: O(1)
*/

int reverseBits(int n) {
    
    int ans = 0;
    
    for(int i = 0; i < 32; i++) {
        ans = ans << 1;
        ans += n & 1;
        n = n >> 1;
    }
    
    return ans;
}