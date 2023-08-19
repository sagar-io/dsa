// https://www.codingninjas.com/studio/problems/odd-even_7993579

#include <iostream>
using namespace std;

string oddEven(int N) {
    string a, b;
    a = "odd";
    b = "even";
    if (N & 1)
        return a;
    else
        return b;
}

int main() {
    cout << 5 << oddEven(5) << endl;
    cout << 0 << oddEven(0) << endl;
    cout << 44 << oddEven(44);
}