#include <iostream>
#include <cstring>
using namespace std;

void uppercase(char *str) {
    for(int i = 0; i < strlen(str); i++) {
        if(97 <= (int)str[i] && (int)str[i] <= 122)
            str[i] = str[i] - 32;
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);
    uppercase(str);
    cout << str;
    return 0;
}