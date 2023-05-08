#include <iostream>
using namespace std;

// Base class 1
class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived class 1: Single inheritance
class Rectangle : public virtual Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

// Base class 2
class Paintable
{
public:
    void setColor(string c)
    {
        color = c;
    }

protected:
    string color;
};

// Derived class 2: Multiple inheritance
class ColoredRectangle : public Rectangle, public Paintable
{
public:
    void display()
    {
        cout << "Color: " << color << ", Area: " << getArea() << endl;
    }
};

// Technically this is also a single inheritance but i have already given an ex of that
class Square : public Shape
{
public:
    int getArea()
    {
        return (width * width);
    }
};

// Derived class 3: Multi-level inheritance
class Cube : public Square
{
public:
    int getVolume()
    {
        return (width * width * width);
    }
};

// Derived class 4: Hierarchical inheritance
class ThreeDShape : public virtual Shape
{
public:
    void setDepth(int d)
    {
        depth = d;
    }

protected:
    int depth;
};
// Derived class 5: Hybrid inheritance
class Cuboid : public Rectangle, public ThreeDShape
{
public:
    int getVolume()
    {
        return (width * height * depth);
    }
};

// Main function
int main()
{
    // Single inheritance
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);
    cout << "Rectangle area: " << rect.getArea() << endl;

    // Multiple inheritance
    ColoredRectangle coloredRect;
    coloredRect.setWidth(5);
    coloredRect.setHeight(7);
    coloredRect.setColor("red");
    coloredRect.display();

    // Hierarchical inheritance
    Square sq;
    sq.setWidth(5);
    cout << "Square area: " << sq.getArea() << endl;

    // Multi-level inheritance
    Cube cube;
    cube.setWidth(5);
    cout << "Cube volume: " << cube.getVolume() << endl;

    // Hybrid inheritance
    Cuboid cuboid;
    cuboid.setWidth(5);
    cuboid.setHeight(7);
    cuboid.setDepth(3);
    cout << "Cuboid volume: " << cuboid.getVolume() << endl;

    return 0;
}