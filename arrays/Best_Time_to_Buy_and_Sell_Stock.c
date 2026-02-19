/*
Problem: Best Time to Buy and Sell Stock
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Approach: Single Pass (Track minimum price and maximum profit)
Time: O(n)
Space: O(1)
*/

int maxProfit(int* prices, int pricesSize) {
    
    int min = prices[0];   // minimum price so far
    int max = 0;           // maximum profit
    
    for (int i = 1; i < pricesSize; i++) {
        
        if (prices[i] < min) {
            min = prices[i];   // update minimum price
        }
        else if (prices[i] - min > max) {
            max = prices[i] - min;   // update maximum profit
        }
    }
    
    return max;   // return best profit
}
