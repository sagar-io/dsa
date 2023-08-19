// Reference - https://leetcode.com/problems/complement-of-base-10-integer/description/

#include <iostream>
using namespace std;

int bitwiseComplement(int n) {
    int x = 0, t = n;
    while(t!=0){
        x|=t;
        t>>=1;
    }
    return (n==0)?1:(~n&x);
}

int main() {
    int n = 7;
    cout << bitwiseComplement(n);
}
