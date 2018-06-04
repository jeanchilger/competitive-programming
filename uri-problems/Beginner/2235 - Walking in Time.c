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

    int credits[3];

    scanf("%d %d %d", &credits[0], &credits[1], &credits[2]);
    int* arr = bubbleSort(credits, 3);

    if (arr[0] == arr[1] || arr[1] == arr[2]) {
        printf("S\n");
    } else if (arr[1] + arr[2] == arr[0]) {
        printf("S\n");
    } else {
        printf("N\n");
    }


    return 0;
}
