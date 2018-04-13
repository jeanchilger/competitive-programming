#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int days;

    cin >> days;

    int years = days / 365;
    days = days % 365;
    int months  = days / 30;
    days = days % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}
