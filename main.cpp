#include <iostream>
#include "Rectangle.h"

int main(int, char**) {
    int width = 0;
    int height = 0;

    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> width;

    std::cout << "Please enter the height of the rectangle: ";
    std::cin >> height;

    Rectangle my_rectangle(width, height);

    my_rectangle.printData();

    return 0;
}
