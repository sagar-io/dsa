//https://leetcode.com/problems/house-robber/

#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int>& nums, int i) {
    if(i >= nums.size())
        return 0;
    int y = nums[i] + rob(nums, i+2);
    int n = 0 + rob(nums, i+1);
    return max(y, n);
}

int main() {
    vector<int> nums = {4,2,3,4};
    cout << rob(nums, 0);
}