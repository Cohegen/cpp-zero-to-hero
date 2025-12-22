#include "rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(int newTop, int newLeft, int newBottom, int newRight)
    : top(newTop), left(newLeft), bottom(newBottom), right(newRight)
{
    upperLeft.setX(left);
    upperLeft.setY(top);

    upperRight.setX(right);
    upperRight.setY(top);

    lowerLeft.setX(left);
    lowerLeft.setY(bottom);

    lowerRight.setX(right);
    lowerRight.setY(bottom);
}

void Rectangle::setUpperLeft(Point location)
{
    upperLeft = location;
    top = location.getY();
    left = location.getX();

    upperRight.setY(top);
    lowerLeft.setX(left);
}

void Rectangle::setLowerLeft(Point location)
{
    lowerLeft = location;
    bottom = location.getY();
    left = location.getX();

    lowerRight.setX(right);
    upperLeft.setX(left);
}

void Rectangle::setUpperRight(Point location)
{
    upperRight = location;
    top = location.getY();
    right = location.getX();

    upperLeft.setY(top);
    lowerRight.setX(right);
}

void Rectangle::setLowerRight(Point location)
{
    lowerRight = location;
    bottom = location.getY();
    right = location.getX();

    lowerLeft.setY(bottom);
    upperRight.setX(right);
}

void Rectangle::setTop(int newTop)
{
    top = newTop;
    upperLeft.setY(top);
    upperRight.setY(top);
}

void Rectangle::setBottom(int newBottom)
{
    bottom = newBottom;
    lowerLeft.setY(bottom);
    lowerRight.setY(bottom);
}

void Rectangle::setLeft(int newLeft)
{
    left = newLeft;
    upperLeft.setX(left);
    lowerLeft.setX(left);
}

void Rectangle::setRight(int newRight)
{
    right = newRight;
    upperRight.setX(right);
    lowerRight.setX(right);
}

int Rectangle::getArea() const
{
    int width = right - left;
    int height = top - bottom;
    return width * height;
}

// Example usage
int main()
{
    Rectangle myRectangle(100, 20, 50, 80);

    int area = myRectangle.getArea();
    std::cout << "Area: " << area << "\n";

    std::cout << "Upper Left X Coordinate: " << myRectangle.getUpperLeft().getX() << "\n";
    std::cout << "Upper Left Y Coordinate: " << myRectangle.getUpperLeft().getY() << "\n";

    return 0;
}
