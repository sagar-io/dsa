// https://leetcode.com/problems/add-strings/description/
#include <iostream>
#include <string>
using namespace std;

string addStrings(string s1, string s2, string ans, int l1, int l2, int c) {
    if(l1!=-1 && l2!=-1) {
        int sum = (s1[l1] - '0') + (s2[l2] - '0') + c;
        c = sum / 10;
        sum = sum % 10;
        char ch = sum + 48;
        ans = ch + ans;
        return addStrings(s1, s2, ans, l1-1, l2-1, c);
    } else if(l1 != -1) {
        int n = s1[l1] - '0' + c;
        c = n / 10;
        n = n % 10;
        char ch = n + '0';
        ans = ch + ans;
        return addStrings(s1, s2, ans, l1-1, l2, c);
    } else if(l2 != -1) {
        int n = s2[l2] - '0' + c;
        c = n / 10;
        n = n % 10;
        char ch = n + '0';
        ans = ch + ans;
        return addStrings(s1, s2, ans, l1, l2-1, c);
    } else {
        if(c!=0){
            char ch = c + '0';
            ans = ch + ans;
        }
        return ans;
    }
}

int main() {
    string num1 = "1911", num2 = "123";
    string ans = "";
    cout << addStrings(num1, num2, ans, num1.length()-1, num2.length()-1, 0);
    return 0;
}