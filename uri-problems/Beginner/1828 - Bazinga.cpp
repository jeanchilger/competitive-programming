#include <iostream>
#include <string>

using namespace std;

int main(){

    int t, tied;
    string sheldon, raj;
    string win[5] = {"pedra", "papel", "tesoura", "lagarto", "Spock"};
    string lose[5][2] = {
        {"lagarto", "tesoura"},
        {"pedra", "Spock"},
        {"papel", "lagarto"},
        {"Spock", "papel"},
        {"tesoura", "pedra"}
    };

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> sheldon >> raj;
        tied = 1;
        if (sheldon == "Spock" && raj == "Spock") {
            cout << "Caso #" << i+1 << ": De novo!\n";
        } else {
            for (int j = 0; j < 5; j++) {
                if (sheldon == win[j]) {
                    if (raj == lose[j][0] || raj == lose[j][1]) {
                        cout << "Caso #" << i+1 << ": Bazinga!\n";
                        tied = 0;
                        break;
                    }
                } else if (raj == win[j]) {
                    if (sheldon == lose[j][0] || sheldon == lose[j][1]) {
                        cout << "Caso #" << i+1 << ": Raj trapaceou!\n";
                        tied = 0;
                        break;
                    }
                }
            }
            if (tied) {
                cout << "Caso #" << i+1 << ": De novo!\n";
            }
        }

    }

    return 0;
}
