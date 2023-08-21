//https://www.codingninjas.com/studio/problems/swap-two-numbers_1380853

#include <iostream>
using namespace std;

void swapNumber(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a = 10, b = 20;
    swapNumber(a, b);
    cout << "a: " << a << endl << "b: " << b;
    return 0;
}