#include <iostream>
#include <cassert>
#include "main.cpp"
using namespace std;

void testConcatenate() {
    assert(concatenate("Hello", " World") == "Hello World");
    assert(concatenate("GitHub", " Actions") == "GitHub Actions");
    assert(concatenate("", "Test") == "Test");
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testConcatenate();
    return 0;
}
