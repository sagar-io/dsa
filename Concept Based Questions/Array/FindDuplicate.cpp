//https://www.codingninjas.com/studio/problems/duplicate-in-array_893397

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int s=0,x=0;
    for(int i=1;i<=arr.size();i++){
        s+=arr[i-1];
        x+=i;
    }
    return s-(x-arr.size());
}

int main() {
    vector<int> a = {1, 2, 3, 4, 4};
    cout << findDuplicate(a);
    return 0;
}
