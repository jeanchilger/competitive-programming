#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 7; j >= 5; j -= 1) {
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}
