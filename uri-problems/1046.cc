#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int start, end, duration;

    cin >> start >> end;

    if (start < end) {
        duration = end - start;

    } else if (start == end) {
        duration = 24;

    } else {
        duration = (24 - start) + end;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}
