#include <iostream>

using namespace std;

int main() {

    int x, z;
    int sum = 0;
    int count = 0;

    cin >> x >> z;
    while (x >= z) {
        cin >> z;
    }

    for (; sum < z; count++) {
        sum += x + count;
    }

    cout << count << endl;

    return 0;
}
