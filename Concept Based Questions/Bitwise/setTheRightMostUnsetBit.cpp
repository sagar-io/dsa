//https://www.codingninjas.com/studio/problems/set-the-rightmost-unset-bit_8160456

#include <iostream>
using namespace std;


int setBits(int N){
    int x = N, y = 1;
    while(x!=0){
        if(!(x&1))
            break;
        x>>=1;
        y<<=1;
    }
    return x==0? N : y|N;
}

int main() {
    cout << setBits(5) << endl;
    cout << setBits(7) << endl;
    cout << setBits(10);
}