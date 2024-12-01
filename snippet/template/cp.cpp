#ifdef _MSC_VER
#pragma warning(disable : 4996)
#include "../snippet/xtra/stdc++.h"
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
#include "../snippet/xtra/debug.h"
#include "../snippet/xtra/timer.h"
#define TOTAL_TIMER ScopedTimer total_time("Total Time")
#define TESTCASE_TIMER ScopedTimer testcase_time("Testcase Time")
void REDIRECT_ISTREAM(const char* fn) {
    if (!freopen(fn, "r", stdin)) {
        perror("Unable to open `input.txt`. Try using stdout\n");
        exit(-99);
    }
}
#else
#define db(...)
#define TOTAL_TIMER
#define TESTCASE_TIMER
#define REDIRECT_ISTREAM(...)
#endif // AbrarShakhi

template<typename typC, typename typD>
auto &operator>>(std::istream& cin, std::pair<typC, typD>& a) {
    return cin >> a.first >> a.second;
}
template<typename typC>
auto &operator>>(std::istream& cin, std::vector<typC>& a) {
    for (auto& x : a) cin >> x;
    return cin;
}
template<typename typC, typename typD>
auto &operator<<(std::ostream& cout, const std::pair<typC, typD>& a) {
    return cout << a.first << ' ' << a.second;
}
template<typename typC, typename typD>
auto &operator<<(std::ostream& cout, const std::vector<std::pair<typC, typD>>& a) {
    for (auto& x : a) cout << x << ' ';
    return cout;
}
template<typename typC>
auto &operator<<(std::ostream& cout, const std::vector<typC>& a) {
    if (!a.size()) return cout;
    cout << a[0];
    for (size_t i = 1; i < a.size(); i++) cout << ' ' << a[i];
    return cout;
}
void __write() {}
template <typename T, typename... Args>
void __write(T&& arg, Args&&... args) {
    std::cout << arg << ' ';
    __write(std::forward<Args>(args)...);
}
void __writeline() {}
template <typename T, typename... Args>
void __writeline(T&& arg, Args&&... args) {
    std::cout << arg << '\n';
    __writeline(std::forward<Args>(args)...);
}
inline void print() { std::cout << '\n'; };
template <typename T, typename... Args>
inline void print(T&& arg, Args&&... args) {
    __write(std::forward<T>(arg), std::forward<Args>(args)...);
}
inline void println() { print(); };
template <typename T, typename... Args>
inline void println(T&& arg, Args&&... args) {
    __writeline(std::forward<T>(arg), std::forward<Args>(args)...);
}

void scan() {}
template <typename T, typename... Args>
void scan(T&& arg, Args&&... args) {
    std::cin >> arg;
    scan(std::forward<Args>(args)...);
}
template<typename T>
T input() {
    T t;
    std::cin >> t;
    return t;
}

#define F_OR(i, a, b, s) for (int64_t i=(a); (s)>0 ? i<(int64_t)(b) : i>(int64_t)(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define LOOP(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)

#define DIVFLOOR(x, y) ((x+y-1) / y)
#define SWAP(a, b) { (a) = (a) ^ (b); (b) = (a) ^ (b); (a) = (a) ^ (b); }
#define MAXIFY(a, b) { if ((b) > (a)) SWAP((a), (b)); }
#define MINIFY(a, b) { if ((b) < (a)) SWAP((a), (b)); }
#define IS_POWER_OF_2(n) (!(n & (n-1)))
#define POWER_OF_2(n) { 1 << n }

// ARRAY(int, arr, n)
// LOOP (i, 0, n, 1)
inline auto solve() {
}

int32_t main() {
    std::cin.tie(0)->sync_with_stdio(0);
    std::cin.exceptions(std::cin.failbit);
    REDIRECT_ISTREAM("input.txt");
    TOTAL_TIMER;
    uint32_t T = 1;
    scan(T);
    LOOP (T) {
        // print("Case #", i + 1, ": ");
        // print(solve());
        // println(((solve()) ? "YES" : "NO"));
        // solve();
        // println();
    }
}