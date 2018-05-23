#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    unsigned long long int n;
    cin >> n;

    string m = to_string(n);
    reverse(m.begin(), m.end());
    cout << m << endl;

    return 0;
}
