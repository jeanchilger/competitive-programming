#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {

    int N, Amount;
    int total = 0;
    int rabbit = 0;
    int rat = 0;
    int frog = 0;
    string Type;

    cin >> N;

    for (int i=0; i < N; i++) {
        cin >> Amount >> Type;
        if (Type == "C") {
            rabbit += Amount;
        } else if (Type == "R") {
            rat += Amount;
        } else {
            frog += Amount;
        }
        total += Amount;
    }

    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << rabbit << "\n";
    cout << "Total de ratos: " << rat << "\n";
    cout << "Total de sapos: " << frog << "\n";

    printf("Percentual de coelhos: %.2f %%\n", (100.0 * rabbit / total));
    printf("Percentual de ratos: %.2f %%\n", (100.0 * rat / total));
    printf("Percentual de sapos: %.2f %%\n", (100.0 * frog / total));

    return 0;
}
