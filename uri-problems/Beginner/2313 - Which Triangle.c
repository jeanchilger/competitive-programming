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

int main(void) {

    int sides[3];
    scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);
    int* arr = bubbleSort(sides, 3);

    if (arr[0] >= arr[1] + arr[2]) {
        printf("Invalido\n");
    } else {
        printf("Valido-");
        if (arr[0] != arr[1] && arr[1] != arr[2]) {
            printf("Escaleno\n");

        } else if (arr[0] == arr[1] && arr[1] == arr[2]) {
            printf("Equilatero\n");

        } else {
            printf("Isoceles\n");

        }
        printf("Retangulo: ");
        if (arr[0]*arr[0] == (arr[1]*arr[1]) + (arr[2]*arr[2])) {
            printf("S\n");

        } else {
            printf("N\n");
        }
    }

    return 0;
}
