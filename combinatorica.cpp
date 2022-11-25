#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mul(ll a, ll b, ll res = 1) {
    if (a == b)return res;
    return (mul(a + 1, b, res * (a + 1)));
}

ll combenatorica(ll a, ll b) {
    //  slow->  return mul(a,b) / mul(1,(b-a));
    return mul(b - a, b) / mul(1, a);
}

int main() {
    cout << combenatorica(3, 4);
}