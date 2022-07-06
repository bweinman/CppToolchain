// format-test.cpp by Bill Weinman [bw.org]
// updated 2022-07-02
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    const char* hello {"Hello, World!"};
    cout << format("{}\n", hello);
}
