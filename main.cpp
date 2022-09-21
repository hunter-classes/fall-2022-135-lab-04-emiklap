#include <iostream>
#include "box.h"

int main() {
    std::cout << "Task A \nbox(7, 4)" << std::endl;
    box(7, 4);

    std::cout << "\n \nTask B \ncheckerboard(11, 6)" << std::endl;
    checkerboard(11, 6);
    std::cout << "\ncheckerboard(11, 7)" << std::endl;
    checkerboard(10, 7);

    return 0;
}
