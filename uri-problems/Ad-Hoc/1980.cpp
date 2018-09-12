#include <iostream>
#include <string>

using namespace std;

int main () {
    string str;
    int s;
    long long f;

    while (1) {
        cin >> str;
        if (str == "0") break;

        s = (int) str.length();
        f = s;
        for (int i = 1; i < s; i++) {
            f *= i;
        }
        cout << f << "\n";
    }
}
