#include <stdio.h>

int * bubbleSort(int arr[], int size) {
    int temp, i, j;

    for(i = 0; i < size; i++) {

        for(j = 0; j < size; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}


int main() {

    int sideList[4];

    scanf(" %d %d %d %d", &sideList[0], &sideList[1], &sideList[2], &sideList[3]);
    int* arr = bubbleSort(sideList, 4);

    if (arr[0] < arr[1]+arr[2]) {
        printf("S\n");

    } else if (arr[1] < arr[2]+arr[3]) {
        printf("S\n");

    } else {
        printf("N\n");
    }

    return 0;
}
