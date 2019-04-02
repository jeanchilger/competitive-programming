#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

typedef tuple<int, int, int> iii;
typedef vector<iii> viii;

viii st;

void print(int n) {
    for (int i = 0; i < n; i++) {
        printf("[%d, %d, %d]\n", get<0>(st[i+1]), get<1>(st[i+1]), get<2>(st[i+1]));
    }
}

int merge(int a, int b) {

    return a + b;
}

void fill(int b, int e, int i, int arr[]) {
    if (b == e) {
        iii n (0, b, e);
        st[i] = n;
        return ;
    }

    fill(b, (b+e)/2, i*2, arr);
    fill((b+e)/2 +1, e, i*2+1, arr);
    
    // TODO: Como agrupar as folhas?

    int x = merge(get<0>(st[2 * i]), get<0>(st[2 * i + 1]));
    iii n(x, b, e);
    st[i] = n;

}

int search(int b, int e, int id = 1) {
    int i = get<1>(st[id]);
    int j = get<2>(st[id]);

    if ((b == i && e == j) || (b >= i && e <= j)) {
        return get<0>(st[id]);
    }

    if (j < b || i > e) {
        return 0;
    }

    if (i <= b || j >= e) {
        return merge(search(b, e, 2 * id),
                     search(b, e, 2 * id + 1));
    }

    return 0;
    
}

void update(int idx, int newVal, int arr[], int id=1) {
    int i = get<1>(st[id]);
    int j = get<2>(st[id]);

    if (idx == i && idx == j) {
        iii n(newVal, i, j);
        st[id] = n;
        arr[idx-1] = newVal;
        return ;
    }

    if (j < idx || i > idx) {
        return ;
    }

    if (i <= idx || j >= idx) {
        update (idx, newVal, arr, 2 * id);
        update (idx, newVal, arr, 2 * id + 1);
    }

    //TODO: mesmo problema da busca
    int v = merge(get<0>(st[2 * id]), get<0>(st[2 * id + 1]));
    iii x (v, i, j);
    st[id] = x;
}

int main() {

    string s;
    int m, n;
    cin >> s;
    n = s.length();
    int arr[n];

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') arr[i] = -1;
        else arr[i] = 1;
    }

    iii x (0, 0, 0);
    st.assign(2 * n, x);

    fill(1, n, 1, arr);

    print(2*n);

    cin >> m;


    return 0;
}
