// https://leetcode.com/problems/add-strings/description/
#include <iostream>
#include <string>
using namespace std;

void addStrings(string &s1, string &s2, string &ans, int l1, int l2, int c) {
    if(l1<0 && l2<0) {
        if(c!=0){
            char ch = c + '0';
            ans = ch + ans;
        }
        return;
    } else {
        int sum = (l1>=0 ? s1[l1] - '0' : 0) + (l2>=0 ? s2[l2] - '0': 0) + c;
        c = sum / 10;
        sum = sum % 10;
        char ch = sum + 48;
        ans = ch + ans;
        addStrings(s1, s2, ans, l1-1, l2-1 , c);
    }
}

int main() {
    string num1 = "1911", num2 = "123";
    string ans = "";
    int l1 = num1.size()-1;
    int l2 = num2.size()-1;
    addStrings(num1, num2, ans, l1, l2, 0);
    cout << ans;
    return 0;
}