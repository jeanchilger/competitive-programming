#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, c;

    while (1) {
        cin >> a >> b >> c;
        // TODO: fazer que encerre com um único valor zero;

        cout << (int)sqrt((a * b) / (c / 100.0)) << endl;
    }


    return 0;
}
