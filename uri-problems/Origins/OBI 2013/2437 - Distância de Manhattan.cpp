#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int xm, ym, xr, yr;
    cin >> xm >> ym >> xr >> yr;
    int res = abs(xm - xr) + abs(ym - yr);
    cout << res << endl;


    return 0;
}
