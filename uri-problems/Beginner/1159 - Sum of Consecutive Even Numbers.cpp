#include <iostream>

using namespace std;

int main() {

    int x, start, sum;

    while (1) {
        cin >> x;

        if (!x) {
            break;
        }

        start = x >= 0 ? (x % 2) + x : ((x % 2)*-1) + x;
        sum = start;

        for (int i = 2; i < 10; i+=2) {
            sum += start + i;
        }

        cout << sum << endl;

    }


    return 0;
}
