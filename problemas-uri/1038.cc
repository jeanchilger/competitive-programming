#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int code, qty;
    float price;

    cin  >> code >> qty;

    switch (code) {
        case 1:
            price = qty * 4.0;
            break;

        case 2:
            price = qty * 4.5;
            break;

        case 3:
            price = qty * 5.0;
            break;

        case 4:
            price = qty * 2.0;
            break;

        case 5:
            price = qty * 1.5;
            break;

    }

    printf("Total: R$ %.2lf\n", price);

    return 0;
}
