#include <iostream>
#include <string>

using namespace std;

typedef unsigned long long ull;

int min(int a, int b)
{
    return (a < b) ? a : b;
}


int binomialCoeff(int n, int k) { 
    int C[n + 1][k + 1]; 
    int i, j; 
  
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            if (j == 0 || j == i) 
                C[i][j] = 1; 

            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
}

int main() {

    int n, ca=0, cb=0;
    string s;

    int countA[26] = {0};
    int countB[26] = {0};

    cin >> n;
    for (int i= 0; i < n; i++) {
        cin >> s;
        if (countA[s[0] - 'a'] > countB[s[0] - 'a']) {
            countB[s[0] - 'a']++;
            cb++;
 
        } else {
            ca++;
            countA[s[0] - 'a']++;
        }

    }



    int a= 0;
    int b= 0;

    for (int i =0; i < 26; i++) {

        if (countA[i] > 1) {
            a += binomialCoeff(countA[i], 2); 
        
        }
        if (countB[i] > 1) {
            b += binomialCoeff(countB[i], 2);

        }
        
    }


    cout << a + b << endl;


    return 0;
}
