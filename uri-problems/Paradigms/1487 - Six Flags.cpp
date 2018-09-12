#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int> > memo;
vector<int> score; // value
vector<int> duration; // weight
int tw;

int s(int n, int t) { // n = weight; t = value
    if (n == -1 || t == 0) return 0;

    if (memo[n][t] != -1) return memo[n][t];
    if (duration[n] > t) {
        return memo[n][t] = s(n - 1, t);

    } 
    return memo[n][t] = max(s(n - 1, t), 
					        score[n] + s(n, t - duration[n]));
}

int main(){
    int n, d, p;
    int count = 1;

    while(1) {
        cin >> n >> tw;
        if (!n && !tw) break;

        memo.assign(n, vector<int>(tw+1, -1));

        for (int i = 0; i < n; i++) {
            cin >> d >> p;
            duration.push_back(d);
            score.push_back(p);
        }
        
        cout << "Instancia " << count << "\n";
		cout << s(n-1, tw) << "\n\n";
		
		count++;
		
		duration.clear();
		score.clear();
	
    }

    return 0;
}
