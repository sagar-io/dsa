//https://www.codingninjas.com/studio/problems/subsequences-of-string_985087

#include <iostream>
#include <vector>
#include <valarray>
using namespace std;

vector<string> subsequences(string str) {
    vector<string> s;
    int n = str.size();
    for (int i = 1; i < pow(2, n); i++) {
        string sb = "";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))
                sb += str[j];
        }
        s.push_back(sb);
    }
    return s;
}

int main() {
        string str = "abc";
        vector<string> v;
        v = subsequences(str);
        for (auto& i:v) {
            cout << i << " ";
        }
        return 0;
    }
