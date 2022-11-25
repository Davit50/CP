#include<bits/stdc++.h>

#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vr(v) v.begin(),v.end()
#define rv(v) v.rbegin(),v.rend()
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Davit cout.tie(NULL);

using namespace std;
using vec = vector<ll>;
using vvec = vector<vector<ll>>;
using str = string;
const ll mod = 1e9 + 7;
const int N = 1e9 + 5;
const int INF = 1e9;

// printf("%.9f\n", x);
//cout << fixed<<setprecision(n);
template<typename T, typename U>
static inline void mx(T &x, U y) {
    if (x < y) x = y;
}

template<typename T, typename U>
static inline void mn(T &x, U y) {
    if (x > y) x = y;
}


bool cmp(int x) {
    return x % 2;
}

int main() {

    vec v{1, 3, 35};
    cout << all_of(vr(v), cmp) << "\n";
    cout << any_of(vr(v), cmp) << "\n";
    cout << none_of(vr(v), cmp) << "\n";
//    all_of -> python all()
//    any_of -> python any()
//    none_of = !all_of


}