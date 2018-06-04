#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    string line;
    cin >> n;
    string board[n];

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    int count = 0;
    int max = -9;
    int pac_index = -1;
    int addition = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            pac_index += addition;

            if (board[i][pac_index] == 'o') {
                count++;

            } else if (board[i][pac_index] == 'A') {
                if (count > max) {
                    max = count;
                }
                count = 0;
            }
        }
        pac_index += addition;
        addition *= -1;
    }
    if (count > max) {
        max = count;
    }

    cout << max << endl;

    return 0;
}
