#include <iostream>
#include <string>

using namespace std;

int main() {
    int qt;
    string p1, p2, p1c, p2c;
    int m,n;


    cin >> qt;

    for (int i = 0; i < qt; i++) {
        cin >> p1 >> p1c >> p2 >> p2c;
        cin >> n >> m;

        if ((n + m) % 2 == 0) {
            if (p1c == "PAR") {
                cout << p1 << endl;
            } else {
                cout << p2 << endl;
            }
        } else {
            if (p1c == "IMPAR") {
                cout << p1 << endl;
            } else {
                cout << p2 << endl;
            }
        }

    }
}
