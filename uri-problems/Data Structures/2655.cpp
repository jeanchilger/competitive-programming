/*
 * Simple representation of a segment tree.
 * */

#include <cstdio>
#include <tuple>
#include <vector>

using namespace std;

typedef unsigned long long int ulli;
typedef tuple<ulli, ulli, ulli> iii;
typedef vector <iii> viii;

viii st;
// st[i] -> (val, b, e)
// where val is the min value between the interval [b, e]

ulli countSetBits(ulli n) {
    ulli c = 0;
    while(n) {
        n = (n & (n - 1));
        c++;
    }
    return c;
}

void fill(ulli b, ulli e, ulli i, ulli arr[]) {
    /*
     * Builds the tree with the intervals and the values.
     * */
    
    if (b == e) {
        iii n(1ull << arr[b-1], b, e);
        st[i] = n;
        return;
    }
    
    fill(b, (b+e)/2, i*2, arr);
    fill((b+e)/2 + 1, e, i*2 + 1, arr);

    ulli x = (get<0>(st[2 * i]) | get<0>(st[(2 * i) + 1]));
    iii n (x, b, e);
    st[i] = n;
}

ulli query(ulli b, ulli e, ulli id = 1) {
    /*
     * Searches for the minimun value in the given range [b, e].
     * Returns the value of this element or INF if there is no such a element.
     * */

    ulli i = get<1>(st[id]);
    ulli j = get<2>(st[id]);

    if ((b == i && j == e) || (b <= i && e >= j)) {
        return get<0>(st[id]);
    }

    if (j < b || i > e) {
        return 0;
    }

    if (i <= b || j >= e) {
        return query(b, e, 2 * id) | query(b, e, 2 * id + 1);
    }
}

void update(ulli idx, ulli newVal, ulli arr[], ulli id=1) {
    /*
     * Updates the tree in the given position.
     * The position is in the form [b, b].
     * */

    ulli i = get<1>(st[id]);
    ulli j = get<2>(st[id]);


    if ((idx == i && idx == j)) {
        iii n(1ull << newVal, i, j);
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

    ulli v = get<0>(st[2 * id]) | get<0>(st[2 * id + 1]);
    iii m(v, i, j);
    st[id] = m;
}

int main() {
    
    ulli n, q, m, o, a, b;
    scanf(" %llu %llu %llu", &n, &q, &m);

    ulli arr[n];
    for (int i = 0; i < n; i++) {
        scanf(" %llu", &arr[i]);
    }

    iii f(0, 0, 0);
    st.assign(10*n, f);
    fill(1, n, 1, arr);

    while (q--) {
        scanf(" %llu %llu %llu", &o, &a, &b);
        if (o == 1) {
            printf("%llu\n", countSetBits(query(a, b)));

        } else {
            update(a, b, arr);
        }

    }

    return 0;
}
