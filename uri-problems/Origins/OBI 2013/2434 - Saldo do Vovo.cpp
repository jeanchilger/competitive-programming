#include <iostream>

using namespace std;

int main() {

    int n, s, s1;
    int minor = 99999;
    cin >> n >> s;

    for (int i = 0; i < n; i ++) {
        cin >> s1;
        s += s1;
        if (minor > s) {
            minor = s;
        }
    }

    cout << minor << endl;

    return 0;
}
