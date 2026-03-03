/*
Problem: Three Consecutive Odds
Link: https://leetcode.com/problems/three-consecutive-odds/
Approach: Linear Scan (Count consecutive odd numbers)
Time: O(n)
Space: O(1)
*/

bool threeConsecutiveOdds(int* arr, int arrSize) {
    
    int count = 0;
    
    for(int i = 0; i < arrSize; i++) {
        
        if(arr[i] % 2 == 1) {
            count++;
            if(count == 3)
                return 1;
        }
        else {
            count = 0;
        }
    }
    
    return 0;
}