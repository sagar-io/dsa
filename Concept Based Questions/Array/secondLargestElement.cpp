//https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> getSecondOrderElements(vector<int> a) {
    vector<int> r(2);
    sort(a.begin(), a.end());
    r[0] = a[a.size() - 2];
    r[1] = a[1];
    return r;
}

int main() {
    vector<int> a = {4, 2, 9, 10, 3, 5};
    for(auto& i: getSecondOrderElements(a))
        cout << "\t" << i;
    return 0;
}