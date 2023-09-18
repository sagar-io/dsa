//https://practice.geeksforgeeks.org/problems/find-unique-element2632/0
#include <iostream>
#include <algorithm>
using namespace std;

int findUnique(int a[], int n, int k) {
    sort(a, a+n);
    for(int i = 0; i <= n; i+=k) {
        if(a[i] != a[i+k-1])
            return a[i];
    }
    return 0;
}

int main() {
    int arr[7] = {6, 2, 5, 2, 2, 6, 6};
    int k = 3;
    cout << findUnique(arr, 7, k);
    return 0;
}