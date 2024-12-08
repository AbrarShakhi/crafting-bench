#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <cstdint>

#ifdef AbrarShakhi
#include "../snippet/xtra/debug.h"
#else
#pragma GCC optimize("O3")
#define DB(...)
#endif // AbrarShakhi

class Timer {
    std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;
public:
    Timer() { reset(); }
    void reset() { m_Start = std::chrono::high_resolution_clock::now(); }
    float elapsed() const { return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - m_Start).count() * 0.001f * 0.001f; }
    float elapsedMillis() const { return std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - m_Start).count() * 0.001f; }
};

std::mt19937 mersenne_twister_engine((uint32_t)std::chrono::steady_clock::now().time_since_epoch().count());
template<class T = int> inline T randint(T a, T b) {
    return std::uniform_int_distribution<T>(a, b)(mersenne_twister_engine);
}

class Csv {
	std::ofstream stream;
	bool isConsoleMode;
	void writeCell() {}
public:
	Csv() : isConsoleMode(true) {}
	Csv(const char* filename) : isConsoleMode(false) {
		stream.open(filename);
		if (!stream.is_open()) exit(-55);
	}
	~Csv() { if (!isConsoleMode) stream.close(); }
	void newRow() {
		if (isConsoleMode) std::cout << '\n';
		else stream << '\n';
	}
	template <typename T, typename... Args>
	void newRow(T&& arg, Args&&... args) {
		if (isConsoleMode) std::cout << arg << ',';
		else stream << arg << ',';
		newRow(std::forward<Args>(args)...);
	}
	void newCell() {
		if (isConsoleMode) std::cout << ',';
		else stream << ',';
	}
	template <typename T, typename... Args>
	void newCell(T&& arg, Args&&... args) {
		if (isConsoleMode) std::cout << arg << ' ';
		else stream << arg << ' ';
		newRow(std::forward<Args>(args)...);
	}
	template <typename T, typename... Args>
	void writeCell(T&& arg, Args&&... args) {
		if (isConsoleMode) std::cout << arg << ' ';
		else stream << arg << ' ';
		writeCell(std::forward<Args>(args)...);
	}
};


int main() {
}