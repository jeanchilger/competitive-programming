#include <iostream>

using namespace std;

int main() {

    int num;
    int biggest = -999;

    while (true) {
        cin >> num;
        if (!num) break;
        if (num > biggest) {
            biggest = num;
        }
    }

    cout << biggest << endl;

    return 0;
}
