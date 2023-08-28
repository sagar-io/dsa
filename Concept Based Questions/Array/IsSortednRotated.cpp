//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/
#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
        int g = 0;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > nums[(i+1)%nums.size()])
                g++;
        return g<=1;
}

int main() {
    vector<int> v = {3, 4, 5, 1, 2};
    cout << check(v);
    return 0;
}