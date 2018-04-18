#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 6; j >= 4; j -= 1) {
            cout << "I=" << i << " J=" << j+i << endl;
        }
    }
    
    return 0;
}
