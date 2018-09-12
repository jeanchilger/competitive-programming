#include<iostream>
#include<string>

using namespace std;

int main() {

    string str;
    bool change;
    while (getline(cin, str)) {
        change = 1;
        for (char x : str) {
            if (x != ' ') {
                if (change) {
                    if (x >= 'a' && x <= 'z') {
                        x = x - 32;
                    }

                } else {
                    if (x >= 'A' && x <= 'Z') {
                        x = x + 32;
                    }
                }
                if (x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z') {
                    change = !change;
                }
            }
            cout << x;
        }
        cout << "\n";
    }

    return 0;
}
