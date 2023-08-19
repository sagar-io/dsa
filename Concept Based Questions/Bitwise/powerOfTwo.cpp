// https://leetcode.com/problems/power-of-two/description/

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        return n>0&&!(n&(n-1));
}

int main() {
    cout << "Is 16 Power of Two:\t" << isPowerOfTwo(16) << endl;
    cout << "Is 6 Power of Two: \t" << isPowerOfTwo(6);
}