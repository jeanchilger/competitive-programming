#include <iostream>

using namespace std;

int main() {

    float num;
    float average = 0;
    int positives = 0;

    for (int i=0; i < 6; i++) {
        cin >> num;

        if (num > 0) {
            average += num;
            positives += 1;
        }
    }

    printf("%d valores positivos\n%.1lf\n", positives, (average/positives));

    return 0;
}
