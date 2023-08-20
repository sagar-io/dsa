//https://www.codingninjas.com/studio/problems/count-total-set-bits_784
// Amazon

#include <iostream>
using namespace std;

int countSetBits(int N)
{
    int s = N, tt = 0, ws = 2;
    while(s!=0){
        tt += ((((N+1)/ws)*ws/2) +  max((N+1)%ws - (ws/2), 0));
        ws*=2;
        s>>=1;
    }
    return tt;
}

int main() {
    cout << countSetBits(7);
}


// Following Brute Forced code gives TLE for big numbers
// int countSetBit(int N) {
//    int c = 0;
//    while(N!=0){
//        if(N&1)
//            c++;
//        N>>=1;
//    }
//    return c;
//}
//int totalSetBits(int N) {
//    int tc = 0;
//    for(int i = 1; i <= N; i++) {
//        tc += countSetBit(i);
//    }
//    return tc;
//}