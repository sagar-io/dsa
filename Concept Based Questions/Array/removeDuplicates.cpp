//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 1, j = 1;
    while(i < nums.size()) {
        if(nums[i]!=nums[i-1]){
            nums[j] = nums[i];
            j++;
        }
        i++;
    }
    return j;
}

int main() {
    vector<int> v = {1, 2, 3};
    cout << removeDuplicates(v);
}