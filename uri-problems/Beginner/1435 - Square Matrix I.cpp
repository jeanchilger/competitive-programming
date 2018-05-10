#include <iostream>

using namespace std;

int main(){

    int n;

    while (1) {
        cin >> n;
        int arr[n][n];
        if (!n) break;

        int maxIndex = n;
        int minIndex = -1;
        int vSize = n / 2 + (n % 2);

        for (int x = 1; x <= vSize; x++) {
            maxIndex--;
            minIndex++;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    if ((i >= minIndex && i <= maxIndex) && (j >= minIndex && j <= maxIndex)) {
                        arr[i][j] = x;
                    }
                }
            }

        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (arr[i][j] < 10 && j != 0) {
                    cout << "   " << arr[i][j];
                } else {
                    cout << "  " << arr[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;

    }

    return 0;
}
