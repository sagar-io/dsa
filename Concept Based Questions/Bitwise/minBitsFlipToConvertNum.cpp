//https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

#include <iostream>
using namespace std;

int minBitFlips(int start, int goal) {
    int x = start^goal, s = 0;
    while(x!=0){
        s++;
        x&=(x-1);
    }
    return s;
}

int main() {
    int i = 7, j = 10;
    cout << minBitFlips(i, j);
    return 0;
}
