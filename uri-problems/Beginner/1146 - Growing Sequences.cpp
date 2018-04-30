#include <iostream>

using namespace std;

int main() {

    int x;

    while (true) {
        cin >> x;
        if (!x) {
            break;
        }

        int count = 1;
        for (; count < x; count++) {
            cout << count << " ";
        }
        cout << count << endl;

    }

    return 0;
}
