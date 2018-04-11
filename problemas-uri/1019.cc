#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int seconds;

    cin >> seconds;

    int hours = seconds / 3600;
    seconds = seconds % 3600;
    int minutes = seconds / 60;
    seconds = seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
