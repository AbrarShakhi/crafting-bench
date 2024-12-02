#include <fstream>

class Csv {
    std::ofstream stream;
public:
    Csv(const char *filename) {
        stream.open(filename);
        if (!stream.is_open()) exit(-55);
    }
    void newRow() {
        stream << '\n';
    }
    template <typename T, typename... Args>
    void newRow(T&& arg, Args&&... args) {
        stream << arg << ',';
        newRow(std::forward<Args>(args)...);
    }
    void newCell() {
        stream << ',';
    }
    template <typename T, typename... Args>
    void newCell(T&& arg, Args&&... args) {
        stream << arg << ' ';
        newRow(std::forward<Args>(args)...);
    }
};