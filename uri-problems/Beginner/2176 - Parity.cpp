#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;

    cin >> s;
    int n = s.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count++;
        }
    }


    if (count % 2 == 0) {
        cout << s << '0' << endl;

    } else {
        cout << s << '1' << endl;
    }

    return 0;
}
