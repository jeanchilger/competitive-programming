#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    float salary, add;
    int percent;

    cin >> salary;

    if ((salary >= 0) && (salary <= 400.00)) {
        percent = 15;

    } else if ((salary >= 400.01) && (salary <= 800.00)) {
        percent = 12;

    } else if ((salary >= 800.01) && (salary <= 1200.00)) {
        percent = 10;

    } else if ((salary >= 1200.01) && (salary <= 2000.00)) {
        percent = 7;

    } else if (salary > 2000) {
        percent = 4;

    }

    add = (percent / 100.0) * salary;

    printf("Novo salario: %.2lf\n", (add + salary));
    printf("Reajuste ganho: %.2lf\n", add);
    printf("Em percentual: %d %\n", percent);


    return 0;
}
