#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int c, n;
    string name;
    cin >> c;

    for (int i = 0; i < c; i++) {
        cin >> name >> n;
        if (name == "Thor") {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }

    return 0;
}
