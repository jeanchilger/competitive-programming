#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    stack <char> checker;
    bool verified;
    string input;

    cin >> input;
    verified = false;

    for (char x : input) {
        if (x == '(') checker.push(x);
        else if (x == ')') {
            if (checker.empty()) {
                cout << "incorrect\n";
                verified = true;
                break;
            } else {
                checker.pop();
            }
        }

    }

    if (!verified) {
        if (!checker.empty()) {
            cout << "incorrect\n";
        } else {
            cout << "correct\n";
        }
    }


    return 0;
}
