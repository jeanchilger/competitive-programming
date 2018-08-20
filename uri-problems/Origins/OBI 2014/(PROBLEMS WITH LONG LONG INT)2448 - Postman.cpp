#include <iostream>
#include <stdlib.h>

using namespace std;

int binarySearch(int arr[], int val) {

    int size = *(&arr + 1) - arr;
    int start = 0;

    int end = size - 1;
    int mid = (end + start) / 2;

    while(true) {
        if (val == arr[mid]) {
            return mid;
        } else if (val < arr[mid]) {

            end = mid-1;
            mid = (end + start) / 2;
        } else {
            start = mid+1;
            mid = (end + start) / 2;
        }

    }
}

int main() {

    int n, m;
    cin >> n >> m;
    int deliver[n];
    unsigned long long int post = 0;
    int nextHouse, cur;
    int last = 0;

    for (int i = 0; i < n; i++) {
        cin >> deliver[i];
    }

    for (int j = 0; j < m; j++) {
        cin >> nextHouse;
        cur = binarySearch(deliver, nextHouse);
        post += abs(cur-last);
        last = cur;
    }

    cout << post << endl;

    return 0;
}
