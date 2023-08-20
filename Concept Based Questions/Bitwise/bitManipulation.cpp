// https://www.codingninjas.com/studio/problems/bit-manipulation_8142533

#include <iostream>
#include <vector>
using namespace std;

vector<int> manipulateBit(int num, int i) {
    vector<int> n;
    int mask;
    n.push_back(num>>(i-1)&1);
    mask = (1<<(i-1));
    if(n[0]){
        n.push_back(num);
        n.push_back(num&(~mask));
    }else {
        n.push_back(num|mask);
        n.push_back(num);
    }
    return n;
}
int main() {
    for(auto el: manipulateBit(25, 3)){
        cout << el << "\t";
    }
}