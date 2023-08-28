//https://www.codingninjas.com/studio/problems/linear-search_6922070

#include <vector>
#include <iostream>
using namespace std;


int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i = 0; i<n;i++)
        if(arr[i]==num)
            return i;
    return -1;
}

int main() {
    vector<int> i = {1, 30, 5222, 0, 2};
    cout << linearSearch(i.size(), 0, i);
    return 0;
}
