#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string a;

    cin >> a;

    int size = a.size();

    int cache[26] = {0};
    vector<char> nRe;

    for (int i = 0; i < size; i++) {
        if (!cache[a.at(i) - 'a']) {
            nRe.push_back(a.at(i));
        }
        cache[a.at(i) - 'a'] += 1;
    }

    int odd = 0;
    for (int j = 0; j < nRe.size(); j++) {
        if (cache[nRe.at(j) - 'a'] % 2) {
            odd++;
        }
    }

    if (size % 2) {

        if (odd == 1) cout << 0 << endl;

        else if (odd % 2) {
            cout << odd - 1 << endl;

        } else {
            cout << "MIracle " << odd << endl;
        }

    } else {
        if (odd == 0) cout << 0 << endl;

        else if (odd % 2) {
            cout << "MIracle " << odd << endl;
        } else {
            cout << odd - 1 << endl;
        }
    }


    return 0;
}
