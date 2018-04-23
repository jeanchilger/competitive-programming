#include <iostream>

using namespace std;

int main() {

    int a = 0;
    int b = 1;
    int n;

    cin >> n;

    for (int i = 1; i < n; i++) {
        cout << a << " ";
        int temp = b;
        b = b + a;
        a = temp;
    }
    cout << a;
    cout << endl;

    return 0;
}
