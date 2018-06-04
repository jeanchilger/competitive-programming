#include <iostream>

using namespace std;

int main() {
    int l, c, a, b;
    cin >> l >> c;
    int arr[l][c];
    cin >> a >> b;

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    a--;
    b--;

    while (1) {
        if ((a > 0) && (arr[a - 1][b])) {
            arr[a][b] = 0;
            a -= 1;

        } else if ((a < l-1) && (arr[a + 1][b])) {
            arr[a][b] = 0;
            a += 1;

        } else if ((b > 0) && (arr[a][b - 1])) {
            arr[a][b] = 0;
            b -= 1;

        } else if ((b < c-1) && (arr[a][b + 1])) {
            arr[a][b] = 0;
            b += 1;

        } else {
            break;
        }
    }

    cout << a+1 << " " << b+1 << endl;

    return 0;
}
