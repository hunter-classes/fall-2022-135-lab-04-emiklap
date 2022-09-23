#include <iostream>
#include "box.h"

int main() {
    std::cout << "Task A \nbox(7, 4)" << std::endl;
    box(7, 4);
    std::cout << "\nbox(10, 8)" << std::endl;
    box(10, 8);

    std::cout << "\n \nTask B \ncheckerboard(11, 6)" << std::endl;
    checkerboard(11, 6);
    std::cout << "\ncheckerboard(8, 9)" << std::endl;
    checkerboard(8, 9);

    std::cout << "\n \nTask C \ncross(8)" << std::endl;
    cross(8);
    std::cout << "\ncross(9)" << std::endl;
    cross(9);

    std::cout << "\n \nTask D \nlower(6)" << std::endl;
    lower(6);
    std::cout << "\nlower(10)" << std::endl;
    lower(10);

    std::cout << "\n \nTask E \nupper(6)" << std::endl;
    upper(6);
    std::cout << "\nupper(10)" << std::endl;
    upper(10);

    std::cout << "\n \nTask F \ntrapezoid(12, 5)" << std::endl;
    trapezoid(12, 5);
    std::cout << "\ntrapezoid(12, 7)" << std::endl;
    trapezoid(12, 7);

    std::cout << "\n \nTask G \ncheckerboard3x3(16, 11)" << std::endl;
    checkerboard3x3(16, 11);
    std::cout << "\ncheckerboard3x3(27, 27)" << std::endl;
    checkerboard3x3(27, 27);
    return 0;
}
