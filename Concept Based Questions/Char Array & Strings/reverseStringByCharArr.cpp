#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void immutableRevString(char *a) {
    char rev[100];
    int i = strlen(a) - 1, j = 0;
    while(i >= 0) {
        rev[j++] = a[i--];
    }
    cout << rev;
}

void mutuableRevString(char *a) {
    // two pointers and O(1) space and O(n) time
    int i = 0, b = strlen(a) - 1;
    while(i < b)
        swap(a[i++], a[b--]);
}

int main() {
    char str[100];
    cin.getline(str, 100);
    immutableRevString(str);
    mutuableRevString(str);
    cout << endl << str;
    return 0;
}