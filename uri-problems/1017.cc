#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int midSpeed;
    int timeSpent;

    cin >> midSpeed;
    cin >> timeSpent;

    double gasSpent = (midSpeed * timeSpent) / 12.0;

    printf("%.3lf\n", gasSpent);

    return 0;
}
