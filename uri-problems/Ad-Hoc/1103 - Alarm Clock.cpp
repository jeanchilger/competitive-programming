#include <iostream>

using namespace std;

int main() {

    int h1, m1, h2, m2;
    int dH, dM;

    while (true) {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 || m1 || h2 || m2) {
            if (h2 > h1) {
                dH = h2 - h1;

            } else  if (h2 < h1){
                dH = 24 - (h1 - h2);
            } else {
                dH = 24;
            }

            if (m2 >= m1) {
                if (dH == 24 && m2 > m1) {
                    dH = 0;
                }
                dM = m2 - m1;

            } else {
                dM = 60 - (m1 - m2);
                if (dH > 0) {
                    dH--;
                }
            }

            cout << dH * 60 + dM << endl;
        } else {
            break;
        }
    }

    return 0;
}
