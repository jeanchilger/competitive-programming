#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int hStart, minStart, hEnd, minEnd, hDuration, minDuration;

    cin >> hStart >> minStart >> hEnd >> minEnd;

    if (hStart < hEnd) {
        hDuration =  hEnd - hStart;

        if (minStart > minEnd){
            minDuration = (60 - minStart) + minEnd;
        } else {
            
        }

    } else if (start == end) {
        hDuration = 24;

    } else {
        return (limit - start) + end;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTOS\n", hDuration, minDuration);

    return 0;
}
