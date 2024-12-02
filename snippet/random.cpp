#include <chrono>
#include <random>

std::mt19937 mt_rng(std::chrono::steady_clock::now().time_since_epoch().count());
template<typename T>
auto randint(T a, T b) {
	return std::uniform_int_distribution<T>(a, b)(mt_rng);
}