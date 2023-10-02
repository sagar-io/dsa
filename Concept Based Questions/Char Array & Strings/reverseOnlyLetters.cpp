//https://leetcode.com/problems/reverse-only-letters/description/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverseOnlyLetters(string s) {
    int i = 0, j = s.length() - 1;
    while(i < j) {
        if(!isalpha(s[i])) {
            i++;
        } else if (!isalpha(s[j])) {
            j--;
        } else {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
}

int main() {
    string s1 = "a-bC-dEf-ghIj";
    cout << reverseOnlyLetters(s1);
    return 0;
}