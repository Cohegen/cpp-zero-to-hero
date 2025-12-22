#include <iostream>

class Point
{
public:
    Point() : x(0), y(0) {} // default constructor
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
    int getX() const { return x; }
    int getY() const { return y; }

private:
    int x;
    int y;
};

class Rectangle
{
public:
    Rectangle(int newTop, int newLeft, int newBottom, int newRight)
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

    ~Rectangle() {}

    // Getters for boundaries
    int getTop() const { return top; }
    int getLeft() const { return left; }
    int getBottom() const { return bottom; }
    int getRight() const { return right; }

    // Getters for corner points
    Point getUpperLeft() const { return upperLeft; }
    Point getLowerLeft() const { return lowerLeft; }
    Point getUpperRight() const { return upperRight; }
    Point getLowerRight() const { return lowerRight; }

    // Setters for corner points
    void setUpperLeft(Point location) {
        upperLeft = location;
        top = location.getY();
        left = location.getX();
        upperRight.setY(top);
        lowerLeft.setX(left);
    }

    void setLowerLeft(Point location) {
        lowerLeft = location;
        bottom = location.getY();
        left = location.getX();
        lowerRight.setY(bottom);
        upperLeft.setX(left);
    }

    void setUpperRight(Point location) {
        upperRight = location;
        top = location.getY();
        right = location.getX();
        upperLeft.setY(top);
        lowerRight.setX(right);
    }

    void setLowerRight(Point location) {
        lowerRight = location;
        bottom = location.getY();
        right = location.getX();
        lowerLeft.setY(bottom);
        upperRight.setX(right);
    }

    // Setters for boundaries
    void setTop(int newTop) {
        top = newTop;
        upperLeft.setY(top);
        upperRight.setY(top);
    }

    void setBottom(int newBottom) {
        bottom = newBottom;
        lowerLeft.setY(bottom);
        lowerRight.setY(bottom);
    }

    void setLeft(int newLeft) {
        left = newLeft;
        upperLeft.setX(left);
        lowerLeft.setX(left);
    }

    void setRight(int newRight) {
        right = newRight;
        upperRight.setX(right);
        lowerRight.setX(right);
    }

    // Calculate area
    int getArea() const {
        return (right - left) * (top - bottom); // assuming top > bottom
    }

private:
    Point upperLeft;
    Point upperRight;
    Point lowerLeft;
    Point lowerRight;
    int top;
    int bottom;
    int left;
    int right;
};


