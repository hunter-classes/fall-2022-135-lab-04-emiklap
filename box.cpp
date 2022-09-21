#include <iostream>

void box(int w, int h) {

    /*std::cout << "Input width: ";
    std::cin >> w;
    std::cout << "Input height: ";
    std::cin >> h;*/

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void checkerboard(int w, int h) {

    /*std::cout << "Input width: ";
    std::cin >> w;
    std::cout << "Input height: ";
    std::cin >> h;*/

    for (int i = 0; i < (h/2); i++) {
        for (int j = 0; j < w; j++) {
            if (j == w/2) {
                std::cout << "\n ";
            }
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}
