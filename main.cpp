#include <iostream>
#include <vector>
#include <fstream>
#include "Rectangle.h"

int main(int, char**) {
    int n = 0;
    int width = 0;
    int height = 0;
    std::vector<Rectangle> rectangles;

    std::cout << "Please enter the rectangle count: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cout << "Please enter the width of the rectangle " << i << ": ";
        std::cin >> width;

        std::cout << "Please enter the height of the rectangle " << i << ": ";
        std::cin >> height;

        rectangles.push_back(Rectangle(width, height));
    }

    std::ofstream outfile("out.txt");

    for (auto rectangle : rectangles) {
        outfile << rectangle.getWidth() << " " << rectangle.getHeight() << " "
                << rectangle.getArea() << " " << rectangle.isEvenArea() << std::endl;
    }

    return 0;
}
