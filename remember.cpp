// __Davit__
#include <bits/stdc++.h>

#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vr(v) v.begin(),v.end()

using namespace std;
using vec = vector<ll>;
using vvec = vector<vector<ll>>;
using str = string;
const ll mod = 1e9 + 7;
const int N = 2e5 + 5;
// printf("%.9f\n", x);
//cout << fixed<<setprecision(n);


int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    // for removing duplicates
//    vec v{1, 2, 2, 2, 3, 4, 1, 1, 4, 5, 5, 5, 1};
//    v.erase(unique(vr(v)), v.end());
//    print(v);


//all possible sums of array composed of array elements
//    vec v{1, 10, 100, 1000};
//    int n = v.size();
//    for (int i = 0; i < (1 << n); i++) {
//        int sm = 0;
//        for (int j = 0; j < n; j++) {
//            if ((i >> j) & 1)sm += v[j];
//        }
//        cout << sm << endl;
//    }




//    numbers with 0 and 5
//    set<ll> s;
//    for (int i = 0; i < (1 << 6); i++) {
//        ll tiv = 0;
//        for (int j = 0; j <= (int) log2(i); j++) {
//            tiv *= 10;
//            if (i >> ((int) log2(i) - j) & 1)tiv += 5;
//        }
//        s.insert(tiv);
//    }
//    for (auto x: s)cout << x << " "






//    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//
//
//    void solve(vector<int> &cur, int id) {
//
//
//        if (cur.size() == 7){
//         for (int i = 0; i < cur.size(); i++)cout << cur[i] << " ";
//    cout << "\n";
//        return;}
//        if (id == vec.size()) return;
//        cur.push_back(vec[id]);
//        solve(cur, id + 1);
//        cur.pop_back();
//        solve(cur, id + 1);
//    }
//
//
//    int main() {
//        vector<int> cur;
//        solve(cur, 0);
//    }



//lambda expression
//    auto cmp = [](int a, int b)
//    {
//        return a.idx > b.idx;
//    };

// !important
//    multiset<tmp, decltype(cmp) *> all(cmp);

//

//    bool operator<(const elem &x, const elem &y) {
//        return x.tin < y.tin;
//    }


//
//    map<ll, ll> glb[21][21];
//    glb[l][r][v]++;
}





