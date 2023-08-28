//https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr) {
    int max = INT_MIN;
    for(auto& i:arr)
        if(i>max)
            max=i;
    return max;
}


int main() {
    vector<int> a = {4, 2, 9, 10, 3, 5};
    cout << largestElement(a);
    return 0;
}