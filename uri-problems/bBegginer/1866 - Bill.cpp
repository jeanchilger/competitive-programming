#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int c, n;

    cin >> c;
    for (int i = 0; i < c; i++) {
        int s = 0;
        int t = 1;
        cin >> n;
        for (int j = 0; j < n; j++) {
            s += t;
            t *= -1;
        }
        cout << s << endl;
    }

    return 0;
}
