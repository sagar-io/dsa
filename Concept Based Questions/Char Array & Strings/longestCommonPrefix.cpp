//https://leetcode.com/problems/longest-common-prefix/description/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

string findCommon(string s1, string s2) {
    int i;
    for(i = 0; i < min(s1.length(), s2.length()); i++) {
        if(s1[i] != s2[i]) break;
    }
    return s1.substr(0, i);
}

string longestCommonPrefix(vector<string>& strs) {
    string common = strs[0];
    for(int i = 1; i < strs.size(); i++) {
        common = findCommon(common, strs[i]);
    }
    return common;
}

int main() {
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}
