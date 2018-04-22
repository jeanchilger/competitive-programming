#include <iostream>

using namespace std;

int main() {

    const int CORRECT_PASSWORD = 2002;
    int password;

    while(true) {
        cin >> password;
        if (password != CORRECT_PASSWORD) {
            cout << "Senha Invalida" << endl;
        } else break;
    }
    cout << "Acesso Permitido" << endl;

    return 0;
}
