#include <iostream>
#include <string>

using namespace std;

int partition(string arr[], int first, int last) {
    int pivot = first;
    int low = first + 1;
    int high = last;
    string temp;

    while (low <= high) {
        if (arr[low] <= arr[pivot]) {
            low++;
        } else {
            if (arr[high] >= arr[pivot]) {
                high--;
            } else {
                temp = arr[low];
                arr[low] = arr[high];
                arr[high] = temp;
            }
        }
    }

    temp = arr[pivot];
    arr[pivot] = arr[high];
    arr[high] = temp;

    return high;

}

void quicksort(string arr[], int first, int last) {
    /*
    sorts an array in increasing order
    */
    if (first < last) {
        int p = partition(arr, first, last);

        quicksort(arr, first, p - 1);
        quicksort(arr, p + 1, last);
    }
}


int main() {

    int n, k;

    cin >> n >> k;
    string names[n];

    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    quicksort(names, 0, n-1);

    cout << names[k-1] << endl;

    return 0;
}
