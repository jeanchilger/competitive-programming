#include <iostream>
#include <map>

using namespace std;

int main() {

    int n, k, p, count;
    while (true) {
        cin >> n >> k;
        if (!n && !k) break;

        map<int, int> questions;
        count = 0;

        for (int i = 0; i < n; i++) {
            cin >> p;
            if (questions.find(p) != questions.end()) {
                questions[p]++;

            } else {
                questions[p] = 1;
            }
        }

        for(map<int, int>::iterator it = questions.begin(); it != questions.end(); ++it) {
            if (it -> second >= k) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
