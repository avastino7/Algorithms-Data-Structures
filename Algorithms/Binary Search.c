#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int p, int r, int num) {
    if (p <= r) {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid - 1, num);
        if (arr[mid] < num)
            return binarySearch(arr, mid + 1, r, num);
    }
    return -1;
}
int main() {
    int arr[] = { 1, 3, 7, 15, 18, 20, 25, 33, 36, 40 };
    int n = 10;
    int target;
    cout << "Enter the key to search: \n";
    cin >> target;
    int index = binarySearch(arr, 0, n - 1, num);
    if (index == -1) {
        cout << target << " doesn't exist in the array";
    }
    else {
        cout << target << " is at index " << index << " in the array";
    }
    return 0;
}
