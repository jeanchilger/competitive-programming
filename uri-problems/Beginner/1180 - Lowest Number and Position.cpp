#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int small = 9999;
    int pos = 0;

    int x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (x[i] < small) {
            small = x[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << small << endl;
    cout << "Posicao: " << pos << endl;


    return 0;
}
