#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    float val;

    float coinsBanknotes [12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00,
                            1.00, 0.50, 0.25, 0.10, 0.05, 0.01}; //problema está aqui
    int coinsNanknotesQty [12];
    int count = 0;

    cin >> val;

    for (int i = 0; i < 12; i++) {
        coinsNanknotesQty[i] = val / coinsBanknotes[i];
        val = val - (coinsNanknotesQty[i] * coinsBanknotes[i]);
        val = roundf(val * 100) / 100.0;
    }
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2lf\n", coinsNanknotesQty[i], coinsBanknotes[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 6; i < 12; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", coinsNanknotesQty[i], coinsBanknotes[i]);
    }
    return 0;
}
