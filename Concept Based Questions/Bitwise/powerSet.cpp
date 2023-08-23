//https://leetcode.com/problems/subsets/
#include <iostream>
#include <vector>
#include <valarray>

using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int s= nums.size();
        for(int i = 0; i < pow(2,s); i++){
            vector<int> t;
            for(int j = 0; j < s;j++){
                if(i&(1<<j))
                    t.push_back(nums[j]);
            }
            v.push_back(t);
        }
        return v;
    }

int main() {
    vector<int> v = {1, 2, 3};
    vector<vector<int>> powerSet;
    powerSet = subsets(v);
    for(auto& i:powerSet) {
        cout << "[";
        for (auto &j: i)
            cout << j << ", ";
        cout << "]" << "\t";
    }
    return 0;
}
