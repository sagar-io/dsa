// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& v, int i, int maxi) {
    if(i>=v.size()-1)
        return maxi;
    for(int j = i+1; j < v.size(); j++) {
        int cProfit = v[j] - v[i];
        maxi = max(cProfit, maxi);
    }
    return findMax(v, i+1, maxi);
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << findMax(prices, 0, 0);
    return 0;
}