// from: https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > cache;
vector<int> elements;
int n;
int sum;

int solve (int i, int j) { // i -> elemento; j -> soma a ser alcançada

}

int main () {

    int val;

    cout << "N. of elements, total sum, elements\n";

    cin >> n >> sum;
    cache.assign(n, vector<int>(sum, -1));

    for (int i = 0; i < n; i++) {
        cin >> val;
        elements.push_back(val);
    }

    cout << solve(0, 0);
    return 0;
}
