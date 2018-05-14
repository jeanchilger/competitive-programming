#include <iostream>

using namespace std;

int main() {

    int n1, d1, v1;
    int n2, d2, v2;

    cin >> n1 >> d1 >> v1;
    cin >> n2 >> d2 >> v2;


    float d10 = d1 / (float) v1;
    float d20 = d2 / (float) v2;

    if (d10 < d20) {
        cout << n1 << endl;
    } else {
        cout << n2 << endl;
    }

    return 0;
}
