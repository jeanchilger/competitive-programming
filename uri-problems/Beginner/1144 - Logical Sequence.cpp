#include <iostream>

using namespace std;

int main() {

    int n;
    int num = 1;
    int n2 = 1;
    int n3 = 1;

    cin >> n;

    for (int i = 1; i <= n*2; i++) {

        cout << num << " ";

        if (i % 2 == 0) {
            cout << n2 + 1 << " ";
            cout << n3 + 1 << endl;

            num ++;

            n2 = num * num;
            n3 = num * num * num;
        } else {
            cout << n2 << " ";
            cout << n3 << endl;

        }

    }

    return 0;
}
