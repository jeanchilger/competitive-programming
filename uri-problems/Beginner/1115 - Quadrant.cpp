#include <iostream>

using namespace std;

int main() {

    int x, y;

    while(true) {
        cin >> x >> y;

        if(!x || !y) {
            break;
        }

        if (x > 0) {
            if (y > 0) cout << "primeiro" << endl;
            else cout << "quarto" << endl;
        } else {
            if (y > 0) cout << "segundo" << endl;
            else cout << "terceiro" << endl;
        }
    }

    return 0;
}
