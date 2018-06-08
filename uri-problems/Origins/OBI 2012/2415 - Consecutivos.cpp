#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int n, v;
    cin >> n;
    int count = 1;
    int last = 0;
    int occur = -999;

    for (int i = 0; i < n; i++) {
        cin >> v;
        if (i != 0) {
            if (v == last) {
                count++;
            } else {
                if (count > occur) {
                    occur = count;
                }

                count = 1;
            }
        }
        last = v;
    }

    if (count > occur) {
        occur = count;
    }

    cout << occur << endl;

    return 0;
}
