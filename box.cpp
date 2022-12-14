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

void upper(int s) {

    for (int i = s; i >= 1; i--) {
        for (int j = i; j < s; j++) {
            std::cout << " ";
        }
        for (int j = i; j > 0; j--) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void trapezoid(int w, int h) {
    int stars = w;
    int spaces = 0;

    if (h*2 > w) {
        std::cout << "Impossible Shape! \n";
    } else {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < spaces; j++) {
                std::cout << " ";
            }
            for (int j = 0; j < stars; j++) {
                std::cout << "*";
            }
            stars -=2;
            spaces += 1;
            std::cout << "\n";
        }
    }
}

void checkerboard_row(int w) {
    int counter = 1;
    for (int i = 0; i < w; i++) {
        if (counter <= 3) {
            std::cout << "*";
            counter++;
        } else if (counter < 6) {
            std::cout << " ";
            counter++;
        } else {
            std::cout << " ";
            counter = 1;
        }
    }
}

void checkerboard_row_2(int w) {
    int counter = 1;
    for (int i = 0; i < w; i++) {
        if (counter <= 3) {
            std::cout << " ";
            counter++;
        } else if (counter < 6) {
            std::cout << "*";
            counter++;
        } else {
            std::cout << "*";
            counter = 1;
        }
    }
}

void checkerboard3x3(int w, int h) {
    int counter = 1;
    for (int i = 0; i < w; i++) {
        if (counter <= 3) {
            checkerboard_row(w);
            counter++;
        } else if (counter < 6) {
            checkerboard_row_2(w);
            counter++;
        } else {
            checkerboard_row_2(w);
            counter = 1;
        }
        std::cout << "\n";
    }
}
