#include <iostream>
#include <map>

using namespace std;

int main() {

    int n, m, id;
    map<int, int> start;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> id;
        start[i] = id;
    }


    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> id;

        for (map<int, int>::iterator it = start.begin(); it != start.end();) {
            if (it -> second == id) {
                it = start.erase(it);
            } else {
                it++;
            }
        }
    }

    for (map<int, int>::iterator it = start.begin(); it != start.end(); it++) {
        if (it == start.begin()) {
            cout << it -> second;
        } else {
            cout << " " << it -> second;
        }
    }
    cout << endl;

    return 0;
}

/*PRESERVAR A ORDEM:::

#include <iostream>
#include <set>

using namespace std;

int main() {

    int n, m, id;
    set<int> start;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> id;
        start.insert(id);
    }


    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> id;
        start.erase(id);
    }

    int count = 0;
    for (set<int>::iterator it = start.begin(); it != start.end(); it++) {
        if (count < n-1) cout << *it << " ";
        else cout << *it << "\n";
        count++;
    }

    return 0;
}

*/
