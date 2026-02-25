/*
Problem: Hamming Distance
Link: https://leetcode.com/problems/hamming-distance/
Approach: XOR + Count Set Bits
Time: O(log n)
Space: O(1)
*/

int hammingDistance(int x, int y) {
    
    int xor = x ^ y;
    int count = 0;
    
    while(xor > 0) {
        count += xor & 1;
        xor = xor >> 1;
    }
    
    return count;
}