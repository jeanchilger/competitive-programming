#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    queue<int> c1;
    queue<int> c2;

    while (1) {
        cin >> n;
        if (!n) break;


        for (int i = 1; i <= n; i++) {
            c1.push(i);
        }

        cout << "Discarded cards:";
        int c = 1;
        while (n > 1) {
            if ((c % 2) == 0) {
                c1.push(c1.front());
                c1.pop();

            } else {
                cout << " " << c1.front();
                c1.pop();
                n--;
                if (c1.size() == 1) break;
                else cout << ",";
            }
            c++;
        }
        cout << "\nRemaining card: " << c1.front() << "\n";
        c1.pop();

    }



    return 0;
}
