#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int val;

    int banknotes [7] = {100, 50, 20, 10, 5, 2, 1};
    int banknotesQty [7];
    int count = 0;

    cin >> val;

    printf("%d\n", val);

    for (int i = 0; i < 7; i++) {
        banknotesQty[i] = val / banknotes[i];
        val = val % banknotes[i];
    }

    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", banknotesQty[i], banknotes[i]);
    }

    return 0;
}
