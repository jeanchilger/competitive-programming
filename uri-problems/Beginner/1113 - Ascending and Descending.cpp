#include <iostream>

using namespace std;

int main() {

    int x, y;

    while(true) {

        cin >> x >> y;

        if (x != y) {
            if (x > y) {
                cout << "Decrescente" << endl;
            } else {
                cout << "Crescente" << endl;
            }

        } else break;
    }

    return 0;
}
