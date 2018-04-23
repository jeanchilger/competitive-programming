#include <iostream>

using namespace std;

int main() {

    int gremio, inter, newInput;
    int games = 0;
    int draw = 0;
    int i = 0;
    int g = 0;

    while (true) {
        cin >> inter >> gremio;

        if (inter > gremio) i++;
        else if (gremio > inter) g++;
        else draw ++;

        games++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> newInput;

        if (newInput == 2) break;
    }

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", games, i, g, draw);
    if (i > g) {
        cout << "Inter venceu mais\n";
    } else if (g > i) {
        cout << "Gremio venceu mais\n";
    } else {
        cout << "Nao houve vencedor\n";
    }

    return 0;
}
