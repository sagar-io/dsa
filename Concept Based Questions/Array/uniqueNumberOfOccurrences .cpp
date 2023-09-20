//
// Created by SAGAR on 20-09-2023.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> n;
        int c = 1;
        for(int i = 0; i < arr.size() - 1; i++) {
           if(arr[i]==arr[i+1]) {
                c++;
           }else {
               n.push_back(c);
               c=1;
           }
        }
        if(arr[arr.size()-1] != arr[arr.size()-2]) {
            n.push_back(1);
        }
        sort(n.begin(), n.end());
        for(int i = 0; i < n.size() - 1; i++) {
            if(n[i] == n[i+1])
                return false;
        }
        return true;
};

int main() {
    vector<int> num = {1, 2, 2, 1, 3};
    cout << uniqueOccurrences(num);
    return 0;
}