#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>

using namespace std;

int main() {


    int n, m, t;

    while (1) {
        cin >> n >> m;
        if (!n && !m) break;

        vector<int> tickets;
        vector<int> fakes;
        int fake = 0;

        for (int i = 0; i < m; i++) {
            cin >> t;

            if (!(find(begin(tickets), end(tickets), t) != end(tickets))) {
                tickets.push_back(t);

            } else {
                if (!(find(begin(fakes), end(fakes), t) != end(fakes))) {
                    fake++;
                    fakes.push_back(t);
                }
            }
        }

        cout << fake << endl;
    }

    return 0;
}
