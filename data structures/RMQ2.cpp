#include <bits/stdc++.h>

using namespace std;

const long long N = 100005;

long long a[N];
long long tree[N];

void build(int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = a[tl];
        return;
    }

    int tm = (tl + tr) / 2;

    build(2 * v, tl, tm);
    build(2 * v + 1, tm + 1, tr);

    tree[v] = min(tree[2 * v], tree[2 * v + 1]);
}

int minim(int v, int l, int r, int tl, int tr) {
    if (tl == l && tr == r) {
        return tree[v];
    }

    if (tr < l || r < tl) {
        return 1000000;
    }

    int tm = (tl + tr) / 2;

    return min(minim(2 * v, l, min(tm, r), tl, tm), minim(2 * v + 1, max(tm + 1, l), r, tm + 1, tr));
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    build(1, 0, n - 1);
    
    cout << minim(1, 0, 5, 0, 5);

    return 0;
}