#include <iostream>

using namespace std;

int main() {

    int n;
    int factorial = 1;

    cin >> n;

    for ( ; n > 0; n--) {
        factorial *= n;
    }

    cout << factorial << endl;

    return 0;
}
