#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

    for (float i = 0; i <= 2.2; i += 0.2) {
        for (int j = 1; j <= 3; j += 1) {
            cout << "I=" << i << " J=" << j+i << endl;
        }
    }

    return 0;
}
