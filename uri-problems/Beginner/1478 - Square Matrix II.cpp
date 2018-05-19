#include <iostream>

using namespace std;

int main(){

    int n;
    while (1) {
        cin >> n;
        if (!n) break;
        int arr[n][n];


        int i = -1;
        int j = -1;
        int val;
        for (int x = 0; x < n; x++) {
            i++;
            j++;
            /*int val2 = val;
            arr[i][j] = val;*/
            val = 1;
            for (int j2 = j; j2 >= 0; j2--) {
                arr[i][j2] = val;
                arr[j2][i] = val;
                val++;

            }
        }


        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (j != 0) {
                    if (arr[i][j] < 10) {
                        cout << "   " << arr[i][j];
                    } else if (arr[i][j] < 100) {
                        cout << "  " << arr[i][j];
                    } else {
                        cout << " " << arr[i][j];
                    }

                } else {
                    if (arr[i][j] < 10) {
                        cout << "  " << arr[i][j];
                    } else if (arr[i][j] < 100) {
                        cout << " " << arr[i][j];
                    } else {
                        cout << arr[i][j];    
                    }
                }
            }
            cout << endl;
        }
        cout << endl;

    }

    return 0;
}
