#include <iostream>

using namespace std;

int main() {

    int x1, y1, x2, y2;
    float a;

    while (true) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 || y1 || x2 || y2) {
            if ((x2 - x1 == 0) && (y2 - y1 == 0)) {
                cout << 0 << endl;
            } else {
                if ((x2 - x1 == 0) || (y2 - y1 == 0)) {
                    cout << 1 << endl;
                } else {
                    a = (float)(y2 - y1) / (x2 - x1);
                    if (a == 1 || a == -1) {
                        cout << 1 << endl;
                    } else {
                        cout << 2 << endl;
                    }
                }
            }
        } else {
            break;
        }
    }

    return 0;
}
