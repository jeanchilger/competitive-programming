#include <iostream>
#include <map>

using namespace std;

int main() {

    int n, i;
    int maxO = -999;
    int maxG = -999;

    cin >> n;
    int grades[n];
    map<int, int> ocur;

    for (i = 0; i < n; i++) {
        cin >> grades[i];
    }

    for (i = 0; i < n; i++) {
        if (ocur.find(grades[i]) == ocur.end()) {
            ocur.insert({grades[i], 0});

        } else {
            ocur[grades[i]]++;
        }
    }

    for (i = 0; i < n; i++) {
        if (ocur[grades[i]] > maxO) {
            maxO = ocur[grades[i]];
            maxG = grades[i];
        } else if (ocur[grades[i]] == maxO) {
            if (grades[i] > maxG) {
                maxG = grades[i];
            }
        }
    }

    cout << maxG << endl;

    return 0;
}
