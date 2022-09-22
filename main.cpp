#include <iostream>
#include "box.h"

int main() {
    std::cout << "Task A \nbox(7, 4)" << std::endl;
    box(7, 4);

    std::cout << "\n \nTask B \ncheckerboard(11, 6)" << std::endl;
    checkerboard(11, 6);
    std::cout << "\ncheckerboard(11, 7)" << std::endl;
    checkerboard(10, 7);

    std::cout << "\n \nTask C \ncross(8)" << std::endl;
    cross(8);
    std::cout << "\ncross(9)" << std::endl;
    cross(9);

    std::cout << "\n \nTask D \nlower(6)" << std::endl;
    lower(6);
    std::cout << "\nlower(10)" << std::endl;
    lower(10);

    return 0;
}
