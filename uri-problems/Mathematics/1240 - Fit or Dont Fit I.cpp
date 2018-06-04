#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, start, end, is;
    string a, b;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        is = 1;
        start = a.length()-b.length();
        end = a.length();
        for(int j = start; j < end; j++) {
            if (a[j] != b[j-start]) {
                printf("nao encaixa\n");
                is = 0;
                break;
            }
        }
        if (is) {
            printf("encaixa\n");
        }
    }

    return 0;
}
