#include <cstdio>
#include <cmath>
#include <tuple>
#include <vector>

using namespace std;

typedef tuple <int, int, int> iii;
typedef vector <iii> viii;

viii st;

void print(int n) {
    /*
     * Prints the hole tree.
     * BFS-like print.
     * */

    for (int i = 1; i < n; i++) {
        printf("st[%d] = [%d, %d, %d]\n", i, get<0>(st[i]), get<1>(st[i]), get<2>(st[i]));
    }

    return;
}

int merge(int a, int b, int c) {
    /*
     * Combines the two given values of the tree.
     * */

    if (c % 2 == 0) return a | b;
    else return a ^ b;
}

void fill(int b, int e, int i, int arr[], int c) {
    /*
     * Builds the tree with the intervals and the values.
     * */

    if (b == e) {
        iii n(arr[b-1], b, e);
      //  printf("TTTTATAT: %d \n", arr[b-1]);
        st[i] = n;
        return;
    }

    fill(b, (b+e)/2, i*2, arr, c-1);
    fill((b+e)/2 +1, e, i*2 + 1, arr, c-1);

    int x = merge(get<0>(st[2 * i]), get<0>(st[(2 * i) + 1]), c);
    //printf("a : %d   b : %d   c : %d\n", get<0>(st[2 * i]), get<0>(st[(2 * i) + 1]), c);
    iii n (x, b, e);
    st[i] = n;
}

void update(int idx, int newVal, int arr[], int c, int id=1) {
   /*
     * Updates the array in the given position.
     * The intervals of the tree are updated as well.
     * */

    int i = get<1>(st[id]);
    int j = get<2>(st[id]);


    if ((idx == i && idx == j)) {
        iii n(newVal, i, j);
        st[id] = n;
        arr[i-1] = newVal;
        return ;
    }


    if (j < idx || i > idx) {
        return ;
    }

    if (i <= idx || j >= idx) {
        update(idx, newVal, arr, c-1, 2 * id);
        update(idx, newVal, arr, c-1, 2 * id + 1);
    }

    int v = merge(get<0>(st[2 * id]), get<0>(st[2 * id + 1]), c);
//    printf("AAAAAAAAAAAAAAAa : %d  c : %d\n", v, c);
    iii m(v, i, j);
    st[id] = m;
}

int main() {


    int n, m, p, b;

    scanf(" %d %d", &n, &m);

    iii x(0, 0, 0);
    int t = pow(2, n);
    st.assign(2*t, x);
    int arr[t];

    for (int i = 0; i < t; i++) {
        scanf(" %d", &arr[i]);
    }

    fill(1, t, 1, arr, n+1);


    //printf("AAAAAAAAA: %d\n", get<0>(st[1]));


    //print(2*t);

    for (int i = 0; i < m; i++) {
        scanf(" %d %d", &p, &b);
        update(p, b, arr, n+1);
        printf("%d\n", get<0>(st[1]));
    }


    return 0;
}
