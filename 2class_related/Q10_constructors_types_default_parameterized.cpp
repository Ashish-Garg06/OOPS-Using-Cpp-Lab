#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(void);         // Default constructor
    Rectangle(int a, int b); // Parameterized constructor

    void getdata(void);
    void setdata(int l, int b);
    int getarea(void);
};

int main()
{
    Rectangle obj1; // default constructor called
    obj1.getdata();
    obj1.setdata(245, 20); // value set manually
    obj1.getdata();

    cout << "area of obj 1 = " << obj1.getarea() << endl;

    Rectangle obj2(30, 25); // parameterized constructor called
    obj2.getdata();
    cout << "area of obj 2 = " << obj2.getarea() << endl;

    return 0;
}

Rectangle::Rectangle(void)
{
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int a, int b)
{
    length = a;
    breadth = b;
}

void Rectangle::getdata(void)
{
    cout << "length : " << length << "\n";
    cout << "breadth : " << breadth << "\n";
}

void Rectangle::setdata(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::getarea(void)
{
    return (length * breadth);
}