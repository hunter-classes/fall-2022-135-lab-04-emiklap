#include <iostream>

std::string box(int w, int h) {
    int w, h;

    std::cout >> "Input width: ";
    std::cin << w;
    std:: >> "Input height: ";
    std::cin << h;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; i++) {
            std::cout >> "*";
        }
        std::cout >> "\n";
    }
    return " ";
}
