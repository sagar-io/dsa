// https://leetcode.com/problems/coin-change/

#include <iostream>
#include <vector>
using namespace std;

int findMinCoin(vector<int>& coins, int amount) {
//    Base Conditions
    if(amount == 0)
        return 0;
    if(amount < 0)
        return INT_MAX;

    int mini = INT_MAX;
//    Processing
    for(auto& coin:coins) {
//    Recursive Call
        int recAns = findMinCoin(coins, amount - coin);
        if(recAns != INT_MAX) {
            int ans = 1 + recAns;
            mini = min(mini, ans);
        }
    }
    return mini;
}

int main() {
    vector<int> v = {6, 8, 5};
    int amount = 11;
    int sol = findMinCoin(v, amount);
    if(sol == INT_MAX) {
        cout << "-1";
    }else {
        cout << sol;
    }
    return 0;
}
