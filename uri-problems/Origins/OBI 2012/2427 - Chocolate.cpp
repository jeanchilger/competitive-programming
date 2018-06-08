#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int l;
    cin >> l;
    int d = 0;

    while (l >= 2) {
        l /= 2;
        d++;
    }

    cout << (int)pow(4, d) << endl;

    return 0;
}
