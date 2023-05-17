#include <iostream>

bool isEven(int x) {
    return x % 2 == 0;
}

int main(int, char**) {
    int width = 0;
    int height = 0;

    std::cout << "Please enter the width of the rectangle: ";
    std::cin >> width;

    std::cout << "Please enter the height of the rectangle: ";
    std::cin >> height;

    int area = width * height;

    bool is_even = isEven(area);

    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Is even: " << is_even << std::endl;

    return 0;
}
