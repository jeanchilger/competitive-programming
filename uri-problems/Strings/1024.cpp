#include <iostream>
#include <string>

using namespace std;

int main () {

    string input;
    char temp;
    int n, size;
    cin >> n;
    getchar();
    for (int q = 0; q < n; q++) {
        getline(cin, input);
        size = input.length();
        // pass 1
        for (int i = 0; i < size; i++) {
            if (input[i] >= 'A' && input[i] <= 'Z' || input[i] >= 'a' && input[i] <= 'z') {
                input[i] = input[i] + 3;
            }
        }
        // pass 2
        for (int i = 0; i < size/2; i++) {
            temp = input[i];
            input[i] = input[(size-1)-i];
            input[(size-1)-i] = temp;
        }

        // pass 3
        for (int i = size/2; i < size; i++) {
            input[i] = input[i]-1;
        }

        cout << input << "\n";
    }




    return 0;
}
