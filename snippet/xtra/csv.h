#include <fstream>
#include <iostream>

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
