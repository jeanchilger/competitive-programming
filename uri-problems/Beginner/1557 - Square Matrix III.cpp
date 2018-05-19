#include <iostream>

using namespace std;

int main() {

    int n;
    while(true) {
        cin >> n;
        if (!n) break;

        int num, arr[n][n], big;
        int start = 1;
        int field = 0;

        for (int i = 0; i < n; i++) {
            num = start;
            for (int j = 0; j < n; j++) {
                arr[i][j] = num;
                num *= 2;
            }
            start *= 2;
        }

        big = arr[n-1][n-1];
        while (big) {
            big /= 10;
            field++;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                printf("%*d", field, arr[i][j]);
                if (j < n - 1){
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
