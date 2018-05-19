#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, q, r;
    cin >> a >> b;

    r = a % b;
    q = a / b;

    if (r < 0) {
        r = r * -1 + 1;
        if (q < 0) {
            q--;
        } else {
            q++;
        }
    }


    cout << q << " " << r << endl;

    return 0;
}
