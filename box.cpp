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


void cross(int s) {
    /*std::cout << "Input width: ";
    std::cin >> w;
    std::cout << "Input height: ";
    std::cin >> h;*/

    //printing the top half of the cross
    int c = s - 2; //counter var
    for (int i = 0; i < s/2; i++) {
        int counter = 0;
        while (counter < i) { //this will put spaces before the first * when needed
            std::cout << " ";
            counter++;
        }

        std::cout << "*"; //the first *

        for (int j = 0; j < c; j++) { //this will put the appropriate number of spaces between the *
            std::cout << " ";
        }

        c = c - 2;
        std::cout << "*" << std::endl; //this will put the second *
    }

    //printing the second half of the cross
    c = 0;
    for (int i = s/2; i < s; i++) {
        int counter = s-1;
        while (counter > i) { //this will put spaces before the first * when needed
            std::cout << " ";
            counter--;
        }

        std::cout << "*"; //the first *

        for (int j = 0; j < c; j++) { //this will put the appropriate number of spaces between the *
            std::cout << " ";
        }

        c = c + 2;
        std::cout << "*" << std::endl; //this will put the second *
    }
}

void lower(int s) {

    for (int i = 1; i <= s; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }


}

