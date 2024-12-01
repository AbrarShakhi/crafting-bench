#ifdef _MSC_VER // If using Visual Studio IDE
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

/* ======================================================== HELPER FUNCTIONS ========================================================== */
void gen_input(const char* inputFilename, int n) {
	//srand(time(0));
	std::ofstream of(inputFilename);
	if (!of.is_open()) {
		perror("[gen_input()]: can not open input.txt file in 'w' mode\n");
		exit(-33);
	}
	// of << n << '\n';
	while (n--) of << rand() % 1000 << ' ';
	of.close();
}

void redirect_inputstream(const char* inf) {
	if (!freopen(inf, "r", stdin)) {
		perror("[redirect_istream()]: can not open input.txt file in 'r' mode\n");
		exit(-33);
	}
}

class Timer {
	FILE* ofd;
	const char* status;
	std::chrono::time_point<std::chrono::high_resolution_clock> start_time_point;
public:
	Timer(FILE* output_fd, const char* p_status) :
		ofd(output_fd), status(p_status) {
		start_time_point = std::chrono::high_resolution_clock::now();
	}
	~Timer() {
		auto end_time_point = std::chrono::high_resolution_clock::now();
		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_time_point).time_since_epoch().count();
		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_time_point).time_since_epoch().count();
		auto duration = end - start;
		auto ms = duration * 0.001;
		fprintf(ofd, "%s,%lf\n", status, ms);
	}
};
/* ============================================================= END ================================================================== */

#define N (int64_t)1000


int main() {
	std::cin.tie(0)->sync_with_stdio(0);
	std::cin.exceptions(std::cin.failbit);

	const char* input_filename = "input.txt";
	const char* csv_filename = "runtime_output.csv";
	char status[30];

	gen_input(input_filename, N);
	redirect_inputstream(input_filename);

	FILE* csvfd = fopen(csv_filename, "w");
	fprintf(csvfd, "Algorithm,%s\n", "Quick+Insertion Sort");
	fprintf(csvfd, "Total elements,Insertions Boundery,Runtime (ms)\n");

	for (int64_t n = 1024; n >= 0; n /= 2) {
		rewind(stdin);
		ARRAY(int64_t, arr, N);
		for (int64_t i = 0; i < N; i++) {
			scanf("%lld", arr + i);
		}
		{
			sprintf(status, "%lld,%lld", N, n);
			Timer t(csvfd, status);
			// Actual Algorithm
		}
	}

	fclose(csvfd);
}
