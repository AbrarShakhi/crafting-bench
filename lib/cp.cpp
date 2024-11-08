
#ifdef _MSC_VER
#pragma warning(disable : 4996)
#include "../lib/stdc++.h"
#define ARRAY(type, name, len) auto name = (type*)_alloca(len * sizeof(type)); if (!name) exit(-99)
#else
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
#pragma GCC target("sse4")
#define ARRAY(type, name, len) type name[len]; if (!name) exit(-99)
#endif // _MSC_VER

#ifdef AbrarShakhi
#include "../lib/debug.cpp"
#include "../lib/timer.h"
#define TOTAL_TIMER ScopedTimer total_time("Total Time")
#define TESTCASE_TIMER ScopedTimer testcase_time("Testcase Time")
void redirect_inputstream(const char* inf) {
    if (!freopen(inf, "r", stdin)) {
        perror("[redirect_istream()]: can not open input.txt file in 'r' mode\n");
        exit(-33);
    }
}
#else
#define dbg(...)
#define TOTAL_TIMER
#define TESTCASE_TIMER
#define redirect_inputstream(...)
#endif // AbrarShakhi

#define DIVFLOOR(x, y) ((x+y-1) / y)
#define SWAP(a, b) { (a) = (a) ^ (b); (b) = (a) ^ (b); (a) = (a) ^ (b); }
#define MAXIFY(a, b) { if ((b) > (a)) SWAP((a), (b)); }
#define IS_POWER_OF_2(n) (!(n & (n-1)))
#define MAX(a, b) (((b) > (a)) ? (b) : (a))
#define MIN(a, b) (((b) > (a)) ? (a) : (b))
#define ABSDIF(a, b) (((b) > (a)) ? (b) - (a) : (a) - (b))
#define LOOP(i, n) for (int64_t i = 0; i < (int64_t)n; i++)

template<typename typC, typename typD> std::istream& operator>>(std::istream& cin, std::pair<typC, typD>& a) {
    return cin >> a.first >> a.second;
}
template<typename typC> std::istream& operator>>(std::istream& cin, std::vector<typC>& a) {
    for (auto& x : a)
        cin >> x;
    return cin;
}
template<typename typC, typename typD> std::ostream& operator<<(std::ostream& cout, const std::pair<typC, typD>& a) {
    return cout << a.first << ' ' << a.second;
}
template<typename typC, typename typD> std::ostream& operator<<(std::ostream& cout, const std::vector<std::pair<typC, typD>>& a) {
    for (auto& x : a)
        cout << x << ' ';
    return cout;
}
template<typename typC> std::ostream& operator<<(std::ostream& cout, const std::vector<typC>& a) {
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}

// ARRAY(int, arr, n)
inline auto solve() {
}

int32_t main() {
    std::cin.tie(0)->sync_with_stdio(0);
    std::cin.exceptions(std::cin.failbit);
    redirect_inputstream("input.txt");
    TOTAL_TIMER;
    uint32_t T = 1;
    std::cin >> T;
    while (T--) {
        //solve();
        //std::cout << solve() << '\n';
        //std::cout << ((solve()) ? "YES" : "NO") << '\n';
    }
}