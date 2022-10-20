#include <bits/stdc++.h>

using namespace std;


int main() {
    vector<uint32_t> map(26, 0);

    string s, res = "";

    cin >> s;

    for (size_t i=0; i < s.length(); i++) {
        map.at((int) s.at(i) - 65) += 1;
    }

    int odd = 0, odd_pos = -1;

    for (int i=0; i < 26; i++) {
        if (map.at(i) % 2 == 1) {
            odd++;
            odd_pos = i;
        }
    }

    if (odd > 1) {
        printf("NO SOLUTION\n");
        return 0;

    } if (odd == 1) {
        res = string(map.at(odd_pos), odd_pos + 65); 
    } 
    
    for (int i=0; i < 26; i++) {
        if (i != odd_pos) {
            res = string(map.at(i) / 2, 65 + i) + res + string(map.at(i) / 2, 65 + i);
        }
    } 

    printf("%s\n", res.c_str());

    return 0;
}
