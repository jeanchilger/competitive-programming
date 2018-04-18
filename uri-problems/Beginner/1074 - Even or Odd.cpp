#include <iostream>

using namespace std;

int main() {

    int N, X;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;

        if (X != 0) {
            if (X % 2 == 0) {
                cout << "EVEN ";
            } else {
                cout << "ODD ";
            }

            if (X > 0) {
                cout << "POSITIVE\n";
            } else {
                cout << "NEGATIVE\n";
            }
        } else {
            cout << "NULL\n";
        }
    }

    return 0;
}
