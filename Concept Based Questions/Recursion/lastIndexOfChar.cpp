//https://practice.geeksforgeeks.org/problems/last-index-of-a-character-in-the-string4516/1

#include <iostream>
using namespace std;

int findLastOccur(string s, char p, int i) {
    if(i<0)
        return -1;
    if(s[i]==p)
        return i;
    int ans = findLastOccur(s, p, --i);
    return ans;
}

int main(){
    string str = "susheel";
    char ch = 'e';
    cout << findLastOccur(str, ch, str.size()-1);
    return 0;
}
