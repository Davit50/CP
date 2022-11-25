// __Davit__
#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define FOR(i, n) for(int i=0;i<n;i++)
#define fast ios::sync_with_stdio(false);

using namespace std;
using vec = vector<ll>;
using vvec = vector<vector<ll>>;
using str = string;
const ll mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e9;
// printf("%.9f\n", x);
//cout << fixed<<setprecision(n);


vector<int> v;
vector<int> seg;
int n;
int sz = 1;

void build(int l, int r, int x) {
    if (r == l) {
        if (l < n) seg[x] = v[l];
        return;
    }
    int m = (l + r) / 2;
    build(l, m, 2 * x + 1);
    build(m + 1, r, 2 * x + 2);
    seg[x] = min(seg[2 * x + 1], seg[2 * x + 2]);
}

int get(int l, int r, int lx, int rx, int x) {
    if (lx >= l && rx <= r)return seg[x];
    if (lx > r || rx < l)return INF;
    int m = (lx + rx) / 2;
    return min(get(l, r, lx, m, 2 * x + 1), get(l, r, m + 1, rx, 2 * x + 2));
}

int get(int l, int r) {
    return get(l, r, 0, sz - 1, 0);
}

void modify(int l, int r, int cur, int idx, int x) {
    if (l == r) {
        seg[cur] = x;
        return;
    }
    int m = (l + r) / 2;
    if (idx <= m)modify(l, m, 2 * cur + 1, idx, x);
    else modify(m + 1, r, 2 * cur + 2, idx, x);
    seg[cur] = min(seg[2 * cur + 1], seg[2 * cur + 2]);
}

void modify(int idx, int x) {
    modify(0, sz - 1, 0, idx, x);
}

int main() {
    int q;
    cin >> n >> q;
    while (sz < n)sz <<= 1;
    seg.resize(sz * 2, 0);
    v.resize(n);
    for (int i = 0; i < n; i++)cin >> v[i];
    build(0, sz - 1, 0);
//    for (int i = 0; i < seg.size(); i++)cout << seg[i] << " ";
    while (q--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) modify(b, c);
        else cout << get(b, c - 1) << "\n";
    }
}

