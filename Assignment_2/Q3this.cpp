#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    // Setter function using "this" keyword
    void setRect(int width, int height)
    {
        this->width = width; // "this" refers to the current object and distinguishes between local and class variables
        this->height = height;
    }

    // Function to calculate the area
    int calculateArea()
    {
        return this->width * this->height;
    }

    // Function to demonstrate the usage of "this" as a pointer
    Rectangle *getThisRectangle()
    {
        return this; // "this" is used as a pointer to the current object (Rectangle)
    }
};

int main()
{
    Rectangle rect1;
    rect1.setRect(5, 10);
    cout << "Area of the rectangle: " << rect1.calculateArea() << endl;

    Rectangle *rect2 = rect1.getThisRectangle();
    cout << "Address of rect1: " << &rect1 << ", address of rect2: " << rect2 << endl;

    return 0;
}