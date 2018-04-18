#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

    int i = 1;
    int j = 60;
    for (int a = 0; a <= 60; a += 5) {
        cout << "I=" << i << " J=" << j << endl;
        i += 3;
        j -= 5;
    }

    return 0;
}
