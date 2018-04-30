#include <iostream>

using namespace std;

int main() {

    int code = 0;
    int pref[3] = {0, 0, 0};

    while (code != 4) {
        cin >> code;

        while (code < 1 || code > 4) {
            cin >> code;
        }

        if (code != 4) {
            pref[code-1]++;
        }

    }

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << pref[0] << endl;
    cout << "Gasolina: " << pref[1] << endl;
    cout << "Diesel: " << pref[2] << endl;


    return 0;
}
