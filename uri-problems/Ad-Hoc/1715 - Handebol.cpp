#include <iostream>

using namespace std;

int main() {

    int n, m, temp;
    cin >> n >> m;

    bool all;
    int count = 0;

    for (int i = 0; i < n; i++) {
        all = true;
        for (int j = 0; j < m; j++) {
            cin >> temp;
            if (!temp) {
                all = false;
            }
        }
        if (all)  {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}
