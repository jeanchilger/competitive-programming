#include <stdio.h>

int partition(double arr[], int first, int last) {
    int pivot = first;
    int low = first + 1;
    int high = last;
    double temp;

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

void quicksort(double arr[], int first, int last) {

    if (first < last) {
        int p = partition(arr, first, last);

        quicksort(arr, first, p - 1);
        quicksort(arr, p + 1, last);
    }
}

int main() {

    double grades[5];
    int i;

    for (i = 0; i < 5; i++) {
        scanf(" %lf", &grades[i]);
    }

    quicksort(grades, 0, 4);

    printf("%.1lf\n", (grades[1] + grades[2] + grades[3]));

    return 0;
}
