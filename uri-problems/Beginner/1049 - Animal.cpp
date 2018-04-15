#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;

int main() {

    string word1, word2, word3, test;
    int responseKey;

    cin >> word1;
    cin >> word2;
    cin >> word3;

    std::map<int, std::string> response = {
        {21, "aguia"},
        {23, "pomba"},
        {73, "homem"},
        {71, "vaca"},
        {62, "pulga"},
        {63, "lagarta"},
        {86, "sanguessuga"},
        {89, "minhoca"}
    };

    responseKey = word1.size() * word2.size() - word3.size();

    cout << response[responseKey] << "\n";

    return 0;
}
