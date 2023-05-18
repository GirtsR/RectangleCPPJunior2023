#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int my_width, int my_height)
{
    width = my_width;
    height = my_height;
    area = width * height;
}

bool Rectangle::isEvenArea() {
    return area % 2 == 0;
}

void Rectangle::printData() {
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Is even: " << isEvenArea() << std::endl;
}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getHeight() {
    return height;
}

int Rectangle::getArea() {
    return area;
}