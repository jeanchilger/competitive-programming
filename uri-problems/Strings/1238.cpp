#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    string a, b;
    cin >> n;
    for (int c = 0; c < n; c++) {

        cin >> a >> b;
        int i;
        if (a.length() > b.length()) {
            for (i = 0 ; i < b.length(); i++) {
                cout << a[i] << b[i];
            }
            for (; i < a.length(); i++) {
                cout << a[i];

            }
            cout << endl;


        } else {
            for (i = 0 ; i < a.length(); i++) {
                cout << a[i] << b[i];
            }

            for (; i < b.length(); i++) {
                cout << b[i];

            }
            cout << endl;
        }


    }


    return 0;
}
