// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

#include <iostream>
#include <vector>
using namespace std;

void findPermutations(vector<string> &v, string &s, int i) {
    if(i >= s.length()) {
        v.push_back(s);
        return;
    }
    for(int j = i; j < s.length(); j++) {
        swap(s[i], s[j]);
        findPermutations(v, s, i+1);
        swap(s[i], s[j]);
    }
}

int main() {
    string S = "xyz";
    vector<string> v;
    findPermutations(v, S, 0);
    for(auto& seq:v) {
        cout << seq << " ";
    }
    return 0;
}