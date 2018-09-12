#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int> > cache;
string a;
string b;

int lcs (int pa, int pb) {
    int currBiggest = -999; // current lcs
    for (int i = 0; i < pa; i++) {
        for (int j = 0; j < pb; j++) {
            if (a[i] == b[j]) {
                cache[i+1][j+1] = 1 + cache[i][j];                       
                                                   
            } else {
                cache[i+1][j+1] = 0;
                                                   
            }
                  
            if (cache[i+1][j+1] > currBiggest) {
                 currBiggest = cache[i+1][j+1];                                       
            }                  
        }
    }
    return currBiggest;           
}


int main () {
    int sa, sb;

    while (getline(cin, a)) {
        getline(cin, b);
        sa = a.length();
        sb = b.length();
        cache.assign(sa+1, vector<int>(sb+1, -1));

        cache[0].assign(sb+1, 0);
        for (int i = 0; i <= sa; i++) {
            cache[i][0] = 0;
        }

        cout << lcs(sa, sb) << "\n";
    }

    return 0;
}

