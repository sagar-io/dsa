// https://www.codingninjas.com/studio/problems/check-whether-k-th-bit-is-set-or-not_5026446
#include <iostream>
using namespace std;

bool isKthBitSet(int n, int k){
    return (1<<(k-1))&n;
}

int main() {
    cout << isKthBitSet(5, 1);
    return 0;
}