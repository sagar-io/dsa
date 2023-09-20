//https://leetcode.com/problems/missing-number/

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int s= nums.size(),n=0;
    for(int i = 0; i<nums.size();i++) {
        s+=i;
        n+=nums[i];
    }
    return s-n;
}

int main() {
    vector<int> n = {0, 2, 3};
    cout << missingNumber(n);
    return 0;
}