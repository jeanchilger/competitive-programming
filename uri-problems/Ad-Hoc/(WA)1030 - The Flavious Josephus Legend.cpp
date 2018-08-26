#include <iostream>
#include <vector>

using namespace std;

int walkThrough (int n, int k) {

    int index = k - 1;
    int res = 0;
    int count = 0;
    int remaining = n;
    vector<int> alive(n, 1);

    while (remaining > 1) {

        if (alive[index % n]) {
            if ((count % 3 != 0) || (count == 0)) {
                alive[index % n] = 0;
                remaining--;

            } else {
                res = index % n;
            }
        }

        index += k;
        count++;
    }

    return res;
}

int main () {

    int nc, n, k;
    cin >> nc;

    for (int i = 0; i < nc; i++) {
        cin >> n >> k;
        cout << "Case " << i+1 << ": " << walkThrough(n, k) << "\n";
    }


    return 0;
}
