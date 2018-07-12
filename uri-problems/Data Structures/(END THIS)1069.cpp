#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    stack<char> checker;
    int n, diamonds;
    string input;

    cin >> n;
    for (int i = 0; i < n; i++) {

        cin >> input;
        diamonds = 0;
        checker = stack<char> ();

        for (char x : input) {
            if (x == '<') checker.push(x);
            else if (x == '>') {
                if (checker.empty()) {
                    

                } else if (x == '>') {
                    // cout << "TOP " << checker.top() << endl;
                    checker.pop();
                    diamonds++;
                }
            }
        }
        cout << diamonds << endl;
    }

    return 0;
}
