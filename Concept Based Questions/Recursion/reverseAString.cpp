//https://leetcode.com/problems/reverse-string/

#include <iostream>
#include <vector>
using namespace std;

 void rev(vector<char>& v, int i) {
        if(i>=(v.size()/2))
            return;
        swap(v[i], v[v.size()-i-1]);
        rev(v, ++i);
    }

int main() {
    vector<char> s = {'H', 'E', 'L', 'L', 'O'};
    rev(s, 0);
    for (auto &ch: s) {
        cout << ch << " ";
    }
}
