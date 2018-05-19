#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, c;

    while (1) {
        cin >> a;
        if (!a) break;
        cin >> b;
        cin >> c;


        cout << (int)sqrt((a * b) / (c / 100.0)) << endl;
    }


    return 0;
}
