#include <cstdio>
#include <tuple>
#include <vector>

using namespace std;

#define INF 9999

typedef long long int lli;
typedef tuple<int, int, int> iii;
typedef vector <iii> viii;

viii st;

lli merge(int a, int b) {
    /*
     * Combines the two given values of the tree.
     * */

    int r = a * b;

    if (r == 0) return 0;
    else if (r > 0) return 1;
    else return -1;

}

void print(int n) {
    /*
     * Prints the hole tree.
     * BFS-like print.
     * */

    for (int i = 0; i < n; i++) {
        printf("[%d, %d, %d]\n", get<0>(st[i+1]), get<1>(st[i+1]), get<2>(st[i+1]));
    }

    return;
}

void init(int b, int e, int i, int arr[]) {
    /*
     * Builds the tree with the intervals and the values.
     * */

    if (b == e) {
        iii n(arr[b-1], b, e);
        st[i] = n;
        return;
    }
    
    init(b, (b+e)/2, i*2, arr);
    init((b+e)/2 +1, e, i*2 + 1, arr);

    int x = merge(get<0>(st[2 * i]), get<0>(st[(2 * i) + 1]));
    iii n (x, b, e);
    st[i] = n;
}

int search(int b, int e, int id = 1) {
    /*
     * Searches for the minimun value in the given range [b, e].
     * Returns the value of this element or INF if there is no such a element.
     * */

    int i = get<1>(st[id]);
    int j = get<2>(st[id]);

    if ((b == i && j == e) || (b <= i && e >= j)) {
        return get<0>(st[id]);
    }

    if (j < b || i > e) {
        return 1;
    }

    if (i <= b || j >= e) {
        return merge(search(b, e, 2 * id), search(b, e, 2 * id + 1));  
    }
}

void update(int idx, int newVal, int arr[], int id=1) {
    /*
     * Updates the array in the given position.
     * The intervals of the tree are updated as well.
     * */

    int i = get<1>(st[id]);
    int j = get<2>(st[id]);


    if (id == 0) return;

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
        update(idx, newVal, arr, 2 * id);
        update(idx, newVal, arr, 2 * id + 1);
    }

    int v = merge(get<0>(st[2 * id]), get<0>(st[2 * id + 1]));
    iii m(v, i, j);
    st[id] = m;
}

int main() {

    int n, k, i, v, r;
    char c;

    while (scanf(" %d %d", &n, &k) != EOF) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf(" %d", &arr[i]);
        }
     
        iii x (0, 0, 0);
        st.assign(2*n, x);
        init(1, n, 1, arr);

        while (k--) {
            scanf(" %c %d %d", &c, &i, &v);
            if (c == 'C') update(i, v, arr);
            else { 
                r = search(i, v);

                if (r == 0) {
                    printf("0");

                } else if (r < 0) {
                    printf("-");
    
                } else {
                    printf("+");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
