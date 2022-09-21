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
