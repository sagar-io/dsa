#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
    int mid = (s + e) / 2;
    int leftArrSize = mid - s + 1;
    int rightArrSize = e - mid;

    int *leftArr = new int[leftArrSize];
    int *rightArr = new int[rightArrSize];

    int k = s;
    for(int i = 0; i < leftArrSize; i++) {
        leftArr[i] = arr[k++];
    }

    k = mid+1;
    for(int i = 0; i < rightArrSize; i++) {
        rightArr[i] = arr[k++];
    }

    int x = 0;
    int y = 0;
    int z = s;

    while(x < leftArrSize && y < rightArrSize) {
        if(leftArr[x] < rightArr[y])
            arr[z++] = leftArr[x++];
         else
            arr[z++] = rightArr[y++];
    }
    while(x < leftArrSize) {
        arr[z++] = leftArr[x++];
    }
    while(y < rightArrSize) {
        arr[z++] = rightArr[y++];
    }
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int s, int e) {
    if(s>=e)
        return;

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main() {
    int arr[10] = {4, 2, 1, 5, 8};
    mergeSort(arr, 0, 4);
    for(int i = 0; i <= 4; i++)
        cout << arr[i] << " ";
    return 0;
}
