// https://leetcode.com/problems/max-consecutive-ones/

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int c = 0, max = 0;
    for(auto i:nums) {
        if(i==1)
            c++;
        else
            c = 0;
        if(c > max)
            max = c;
    }
    return max;
}

int main() {
    vector<int> a = {1, 1, 1, 0, 1, 1, 1, 1};
    cout << findMaxConsecutiveOnes(a);
    return 0;
}