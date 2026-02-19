/*
Problem: Best Time to Buy and Sell Stock II
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
Approach: Greedy (Add all increasing differences)
Time: O(n)
Space: O(1)
*/

int maxProfit(int* prices, int pricesSize) {
    
    int max = 0;  // total profit
    
    for(int i = 1; i < pricesSize; i++) {
        
        if(prices[i] > prices[i - 1]) {
            max += prices[i] - prices[i - 1];  // capture every upward move
        }
    }
    
    return max;  // maximum possible profit
}
