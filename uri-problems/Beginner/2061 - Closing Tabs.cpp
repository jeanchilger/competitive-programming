#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, m;
    string act;

    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> act;
        if (act == "fechou") {
            n++;
        } else {
            n--;
        }
    }
    cout << n << endl;

    return 0;
}
