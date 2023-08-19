//Description - https://leetcode.com/problems/number-of-1-bits/description/

#include <iostream>
using namespace std;

int hammingWeight(int n) {
    int c = 0;
    while(n!=0){
        if(n&1){
            c+=1;
        }
        n>>=1;
    }
    return c;
}

int main() {
    int x;
    x = hammingWeight(11);
    cout << x;
    return 0;
}

