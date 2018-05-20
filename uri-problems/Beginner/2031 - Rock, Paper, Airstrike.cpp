#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    string p1, p2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p1 >> p2;
        if (p1 == "ataque" && p2 == "ataque") {
            cout << "Aniquilacao mutua\n";
        } else if (p1 == "pedra" && p2 == "pedra") {
            cout << "Sem ganhador\n";
        } else if (p1 == "papel" && p2 == "papel") {
            cout << "Ambos venceram\n";
        } else {
            if (p1 == "ataque") {
                cout << "Jogador 1 venceu\n";
            } else if (p2 == "ataque") {
                cout << "Jogador 2 venceu\n";
            } else {
                if (p1 == "pedra") {
                    cout << "Jogador 1 venceu\n";
                } else if (p2 == "pedra") {
                    cout << "Jogador 2 venceu\n";
                } else {
                    if (p1 == "papel") {
                        cout << "Jogador 2 venceu\n";
                    } else {
                        cout << "Jogador 1 venceu\n";
                    }
                }
            }
        }
    }

    return 0;
}
