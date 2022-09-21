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

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {   //if it is an even row, start with astericks and then spaces

                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            } else {    //if it is an odd row, start with spaces and then use astericks
                if (j % 2 == 0) {
                    std::cout << " ";
                } else {
                    std::cout << "*";
                }
            }
        }
        std::cout << "\n";
    }
}
