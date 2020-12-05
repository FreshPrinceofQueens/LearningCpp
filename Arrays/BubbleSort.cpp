//
// Created by Alp Sagra on 2020-12-04.
//
#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int arr[], int length) {
    //Keeps track of if array is sorted;
    bool isSorted = true;
    for(int i = 0; i < length; ++i) {
        for(int j = 0; j < length - i; ++j) {
            if(arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j+1]);
                isSorted = false;
            }
        }
        if(isSorted) {
            cout << "Array ended early on " << i + 1 << " iteration!" <<  endl;
            return;
        }
        isSorted = true;
    }
}

int main() {
    int arr[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    BubbleSort(arr, size(arr));
    for(int i = 0; i < size(arr); ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}