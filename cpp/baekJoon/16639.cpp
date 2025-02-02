#include <bits/stdc++.h>

#define debug if constexpr (local) std::cout
#define endl '\n'
#define fi first
#define se second

#ifdef LOCAL
constexpr bool local = true;
#else
constexpr bool local = false;
#endif

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

/* - GLOBAL VARIABLES ---------------------------- */
int N, answer;
string s;
/* ----------------------------------------------- */

/* - FUNCTIONS ----------------------------------- */
int calculate(int x, int y, char op) {
    if (op == '+') {
        return x + y;
    }

    if (op == '*') {
        return x*y;
    }

    if (op == '-') {
        return x - y;
    }

    return 0;
}
/* ----------------------------------------------- */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    if constexpr (local) 
        (void)!freopen("input.txt", "r", stdin);

    cin >> N >> s;

    return 0;
}
