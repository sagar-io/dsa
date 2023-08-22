//https://leetcode.com/problems/divide-two-integers/description/

#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
    if(dividend == divisor)
        return 1;
    bool isNegative = false;
    if(dividend < 0 || divisor < 0)
        isNegative = true;
    unsigned dividendo = abs(dividend);
    unsigned divisoro = abs(divisor);
    int ans = 0;
    while(dividendo > divisoro) {
        int pow = 0;
        while(dividendo > (divisoro<<(pow+1))){
            pow++;
        }
        ans += 1<<pow;
        dividendo -= divisoro<<pow;
    }
    if(isNegative)
        ans *= -1;
    if(ans > INT_MAX)
        return INT_MAX;
    else if(ans < INT_MIN)
        return INT_MIN;
    return ans;
}

int main() {
    cout << divide(7, 3) << endl;
    cout << divide(90, 9) << endl;
}