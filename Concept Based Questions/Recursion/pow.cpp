//https://leetcode.com/problems/powx-n/description/
#include <iostream>
using namespace std;
double ans;

double calcPow(double x, long int n) {
    if(n == 1) return x;
    if(n % 2 == 0)
         return calcPow(x * x, n/2);
    else
        return x * calcPow(x * x, n - 1);
}

int main() {
    double x = 2;
    double n = 4;
    if(n == 0) return 1;
    double value = calcPow(x, abs(n));
    if(n < 0)
        value = 1 / value;
    cout << value;
    return 0;
}








//Below Code gives TLE (BRUTE FORCE) -
//int calcPow(double x, int n, double ans) {
//    if(n==0) return ans;
//    ans *= x;
//    return calcPow(x, n-1, ans);
//}
//
//int main() {
//    double x = 2;
//    double n = -2147483644;
//    cout << abs(n) << "hi";
//    double value = calcPow(x, abs(n), 1);
//    if(n < 0)
//        value = 1 / value;
//    cout << value;
//    return 0;
//}