#include <iostream>

using namespace std;

int main() {

    int x, q;
    int xOccurence[2000] = {0};

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        xOccurence[x-1]++;
    }

    for (int i = 0; i < 2000; i++) {
        if (xOccurence[i]) {
            cout << i+1 << " aparece " << xOccurence[i] << " vez(es)\n";
        }
    }



    return 0;
}
