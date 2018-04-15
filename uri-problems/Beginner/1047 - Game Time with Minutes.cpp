#include <iostream>
#include <stdio.h>

using namespace std;

int calculateTime(int start, int end, int limit) {
    if (start < end) {
        return end - start;

    } else if (start == end) {
        return limit;

    } else {
        return (limit - start) + end;
    }
}

int main() {

    int hStart, minStart, hEnd, minEnd, hDuration, minDuration;

    cin >> hStart >> minStart >> hEnd >> minEnd;

    hDuration = calculateTime(hStart, hEnd, 24);
    minDuration = calculateTime(minStart, minEnd, 60);

    if ((hDuration > 0) && (minStart > minEnd)) {
        hDuration -= 1;
    } else if (minDuration == 60 && hDuration < 24) {
        hDuration += 1;
    } else if (hDuration == 24) {
        if (minStart < minEnd) {
            hDuration = 0;
        } else {
            minDuration = 0;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hDuration, minDuration);

    return 0;
}
