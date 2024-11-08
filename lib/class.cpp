
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
#else
#define dbg(...)
#endif // AbrarShakhi

class Timer {
public:
	Timer(const char *p_status, FILE *output_stream):
		status(p_status), of(output_stream) {
		start_time_point = std::chrono::high_resolution_clock::now();
	}
	~Timer() {
		auto end_time_point = std::chrono::high_resolution_clock::now();
		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_time_point).time_since_epoch().count();
		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_time_point).time_since_epoch().count();
		auto duration = end - start;
		auto ms = duration * 0.001;
		fprintf(of, "%s,%lf\n", status, ms);
	}
private:
	FILE* of;
	const char* status;
	std::chrono::time_point<std::chrono::high_resolution_clock> start_time_point;
};


void gen_input(const char* f, int n) {
	std::ofstream of(f);
	if (!of.is_open()) {
		perror("[gen_input()]: can not open input.txt file in 'w' mode\n");
		exit(-33);
	}
	of << n << '\n';
	while (n--)
		of << rand() % 1000 << ' ';
	of.close();
}

void redirect_inputstream(const char *inf) {
	if (!freopen(inf, "r", stdin)) {
		perror("[redirect_istream()]: can not open input.txt file in 'r' mode\n");
		exit(-33);
	}
}

#define KILO 1000
#define MEGA 1000000

const char* inputfile = "input.txt";
const char* csvfile = "runtime_output.csv";
char csv_status[20];

const size_t N = 10 * KILO;

// ARRAY(int, arr, n)
inline auto sln() {
}

int main() {
	std::cin.tie(0)->sync_with_stdio(0);
	std::cin.exceptions(std::cin.failbit);

	//gen_input(inputfile, N);
	FILE* csvp = fopen(csvfile, "w");
	//redirect_inputstream(inputfile);
	
	//fprintf(csvp, "Algorithm,%s\n", );
	//fprintf(csvp, "Number of elements,Runtime\n");
	for (size_t n = KILO; n < N; n += KILO) {
		sprintf(csv_status, "%zu", n);
		{
			//Timer t(fmt, csvp);


		}
	}

	fclose(csvp);
}
