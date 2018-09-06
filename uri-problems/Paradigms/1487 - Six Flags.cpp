#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int> > memo;
vector<int> score; // value
vector<int> duration; // weight
int tw;

int s(int n, int t) { // n = weight; t = value
    if (n == 0 || t == 0) return 0;

    if (memo[n][t] != -999) return memo[n][t];

    if (duration[n] > tw) {
        memo[n][t] = 0;
        return s(n, t-1); // TODO Verify if isn't t+1 instead of t-1

    } // else

    memo[n][t] = max(s(n-1, t), s(n-1, t-duration[t]) + score[n]);
    return memo[n][t];

}

int main(){
    int n,  d, p;

    while(1) {
        cin >> n >> tw; // n = inputs; tw = capacity
        if (!n && !tw) break;

        memo.assign(tw+1, vector<int>(tw+1, -999));

        for (int i = 0; i < n; i++) {
            cin >> d >> p;
            duration.push_back(d);
            score.push_back(p);
        }

        cout << s(n, tw);

    }


    return 0;
}
