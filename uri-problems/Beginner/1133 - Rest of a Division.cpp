#include <iostream>

using namespace std;

int main() {

    int x, y;

    cin >> x >> y;

    if (y < x) {
        int temp = y;
        y = x;
        x = temp;
    }
    x++;
    for (; x < y; x++) {
        if (x % 5 == 2 || x % 5 == 3) {
            cout << x << endl;
        }
    }


    return 0;
}
