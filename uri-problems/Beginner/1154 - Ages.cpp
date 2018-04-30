#include <iostream>

using namespace std;

int main() {

    int total = 0;
    int count = 0;
    int age;

    while (1) {
        cin >> age;

        if (age >= 0) {
            total += age;
            count++;
        } else {
            break;
        }

    }
    printf("%.2lf\n", (float)total/count);

    return 0;
}
