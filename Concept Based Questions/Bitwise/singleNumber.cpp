//https://leetcode.com/problems/single-number/description/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = 0;
    for(auto& i:nums){
        n^=i;
    }
    return n;
}

int main() {
    vector<int> n = {1, 2, 3, 3, 1};
    cout << singleNumber(n);
    return 0;
}
