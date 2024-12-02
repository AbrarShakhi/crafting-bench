#include <iostream>
#include <fstream>
#include <chrono>
#include <random>

#ifdef _MSC_VER // IF USING VISUAL STUDIO IDE 
#pragma warning(disable : 4996)
#define ARRAY(type, name, len) auto name = (type*)_alloca(len * sizeof(type)); if (!name) exit(-99)
#else
#define ARRAY(type, name, len) type name[len]; if (!name) exit(-99)
#endif // _MSC_VER

#ifdef AbrarShakhi
#include "../snippet/xtra/debug.h"
#else
#define db(...)
#endif // AbrarShakhi

class Timer {
	std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;
public:
	Timer() { reset(); }
	void reset() { m_Start = std::chrono::high_resolution_clock::now(); }
	float elapsed() const { return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - m_Start).count() * 0.001f * 0.001f; }
	float elapsedMillis() const { return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - m_Start).count() * 0.001f; }
};

std::mt19937 mt_rng(std::chrono::steady_clock::now().time_since_epoch().count());
template<typename T>
auto randint(T a, T b) {
	return std::uniform_int_distribution<T>(a, b)(mt_rng);
}

class Csv {
    std::ofstream stream;
    void writeCell() {}
public:
    Csv(const char *filename) {
        stream.open(filename);
        if (!stream.is_open()) exit(-55);
    }
    void newRow() { stream << '\n'; }
    template <typename T, typename... Args>
    void newRow(T&& arg, Args&&... args) {
        stream << arg << ',';
        newRow(std::forward<Args>(args)...);
    }
    void newCell() { stream << ','; }
    template <typename T, typename... Args>
    void newCell(T&& arg, Args&&... args) {
        stream << arg << ' ';
        newRow(std::forward<Args>(args)...);
    }
    template <typename T, typename... Args>
    void writeCell(T&& arg, Args&&... args) {
        stream << arg << ' ';
        writeCell(std::forward<Args>(args)...);
    }
};


int32_t main() {
}