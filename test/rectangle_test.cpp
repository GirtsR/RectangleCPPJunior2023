#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "Rectangle.h"

bool isAreaGreater(Rectangle rect1, Rectangle rect2) {
    return rect1.getArea() > rect2.getArea();
}

TEST(RectangleTest, CreateEvenAreaRectangle) {
    Rectangle rect{5, 4};
    EXPECT_EQ(rect.getWidth(), 5);
    EXPECT_EQ(rect.getHeight(), 4);
    EXPECT_EQ(rect.getArea(), 20);
    EXPECT_TRUE(rect.isEvenArea());
}

TEST(RectangleTest, CreateOddAreaRectangle) {
    Rectangle rect{7, 9};
    EXPECT_EQ(rect.getWidth(), 7);
    EXPECT_EQ(rect.getHeight(), 9);
    EXPECT_EQ(rect.getArea(), 63);
    EXPECT_FALSE(rect.isEvenArea());
}

TEST(RectangleVectorTest, SortByArea) {
    std::vector<Rectangle> rect_vector;
    rect_vector.push_back(Rectangle{1, 5});
    rect_vector.push_back(Rectangle{3, 20});
    rect_vector.push_back(Rectangle{4, 12});

    std::sort(rect_vector.begin(), rect_vector.end(), isAreaGreater);

    std::vector<int> expected_area = {60, 48, 5};
    std::vector<int> expected_width = {3, 4, 1};
    std::vector<int> expected_height = {20, 12, 5};

    for (int i = 0; i < rect_vector.size(); i++) {
        std::cout << "Checking rectangle " << rect_vector[i].getWidth() << "x" 
                << rect_vector[i].getHeight() << std::endl;
        EXPECT_EQ(rect_vector[i].getArea(), expected_area[i]);
        EXPECT_EQ(rect_vector[i].getWidth(), expected_width[i]);
        EXPECT_EQ(rect_vector[i].getHeight(), expected_height[i]);
    }
}

TEST(RectangleVectorTest, SortByAreaEqualAreas) {
    std::vector<Rectangle> rect_vector;
    rect_vector.push_back(Rectangle{5, 1});
    rect_vector.push_back(Rectangle{1, 5});
    rect_vector.push_back(Rectangle{4, 12});

    std::sort(rect_vector.begin(), rect_vector.end(), isAreaGreater);

    std::vector<int> expected_area = {48, 5, 5};
    std::vector<int> expected_width = {4, 5, 1};
    std::vector<int> expected_height = {12, 1, 5};

    for (int i = 0; i < rect_vector.size(); i++) {
        std::cout << "Checking rectangle " << rect_vector[i].getWidth() << "x" 
                << rect_vector[i].getHeight() << std::endl;
        EXPECT_EQ(rect_vector[i].getArea(), expected_area[i]);
        EXPECT_EQ(rect_vector[i].getWidth(), expected_width[i]);
        EXPECT_EQ(rect_vector[i].getHeight(), expected_height[i]);
    }
}