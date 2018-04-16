#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    int ddd;

    cin >> ddd;

    std::map<int, std::string> dddReference = {
        {11, "Sao Paulo"},
        {61, "Brasilia"},
        {71, "Salvador"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };

    if (dddReference.count(ddd) > 0) {
        cout << dddReference[ddd] << "\n";
    } else {
        cout << "DDD nao cadastrado\n";
    }

    return 0;
}
