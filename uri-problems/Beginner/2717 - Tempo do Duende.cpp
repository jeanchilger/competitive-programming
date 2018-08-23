#include <iostream>

using namespace std;

int main(){

    int n, a, b;
    cin >> n;
    cin >> a >> b;

    cout << ((a + b > n) ? "Deixa para amanha!\n" : "Farei hoje!\n");

    return 0;
}
