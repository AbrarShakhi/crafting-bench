#include <chrono>
#include <random>

std::mt19937 mt_rng(std::chrono::steady_clock::now().time_since_epoch().count());
int64_t randint(int64_t a, int64_t b) {
	return std::uniform_int_distribution<int64_t>(a, b)(mt_rng);
}