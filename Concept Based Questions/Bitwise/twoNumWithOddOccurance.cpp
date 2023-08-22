//https://www.codingninjas.com/studio/problems/two-numbers-with-odd-occurrences_8160466

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoOddNum(vector<int> arr){
    vector<int> v(2);
    int n = arr.size()-1, i = 0, p = 0;
    sort(arr.begin(), arr.end());
    while (i < n) {
        if ((arr[i] ^ arr[i+1]) != 0) {
            v[p++] = arr[i];
            i++;
        }else
            i=i+2;
    }
    if(i == n)
        v[1] = arr[n];
    if(v[0] < v[1])
        swap(v[0], v[1]);
    return v;
}

int main() {
    vector<int> v = {3, 3, 2, 1};
    v = twoOddNum(v);
    for(auto& i: v)
        cout << i << "\t";
    return 0;
}
