#include <iostream>
#include <string>

using namespace std;

int main() {

    int l;
    string s;

    cin >> l;
    cin >> s;
    int ex = 0;
    int op = 0;
    int ok = 1;
    for (int i = 0; i < l; i++) {
        if (s[i] == '(') op++;
    }

    for (int i = 0; i < l; i++) {
        if (s[i] == '(') ex++;

        else if (s[i] == ')') ex--;

        else {
            if (op < l / 2) {
                ex++;
                op++;
                s[i] = '(';
            
            } else {
                ex--;
                s[i] = ')';
            }
        }
        
        if (ex < 0 || (ex == 0 && i != l-1)) {
            ok = 0;
            cout << ":(\n";
            break;
        }
    }

    if (ex != 0 && ok) cout << ":(\n";
    else if (ok) cout << s << "\n";

    return 0;
}

