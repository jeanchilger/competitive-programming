#include <iostream>

using namespace std;

int main() {

    int long X, Y;
    int long odd = 0;

    cin >> X;
    cin >> Y;

    int long start = X + ((X + 1) % 2);
    int long end = Y + ((Y + 1) % 2);

    if (start > end) {
        int long temp1 = start;
        int long temp2 = X;
        start = end;
        end = temp1;
        X = Y;
        Y = temp2;
    }

    for (int i = start; i < end; i += 2) {
        if ((i > X) && (i < Y)) {
            odd += i;
        }
    }

    cout << odd << "\n";

    return 0;
}
