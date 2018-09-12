#include <iostream>

using namespace std;

int main () {

    int n;
    while (1) {
        cin >> n;
        if (!n) break;
        int i;
        int arr[n+2];
        for (i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        arr[0] = arr[n];
        arr[n+1] = arr[1];

        int m = 0;
        for (int j = 1; j <= n; j++) {
            if ((arr[j] > arr[j-1] && arr[j] > arr[j+1]) || (arr[j] < arr[j-1] && arr[j] < arr[j+1])) {
                m++;
            }
        }
        cout << m << "\n";
    }

    return 0;
}
