#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    string permu, message;
    string alpha = "abcdefghijklmnopqrstuvwxyz";

    cin >> permu;
    map<char, char> decrypt;

    for (int i = 0; i < 26; i++) {
        decrypt.insert({alpha[i], permu[i]});
    }

    cin >> message;
    for (int i = 0; i < message.length(); i++) {
        cout << decrypt[message.at(i)];
    }
    cout << endl;

    return 0;
}
