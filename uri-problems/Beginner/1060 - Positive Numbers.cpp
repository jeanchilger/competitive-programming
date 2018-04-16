#include <iostream>

using namespace std;

int main() {

    float num;
    int positives = 0;

    for (int i=0; i < 6; i++) {
        cin >> num;
        if (num > 0) {
            positives += 1;
        }
    }

    printf("%d valores positivos\n", positives);


    return 0;
}
