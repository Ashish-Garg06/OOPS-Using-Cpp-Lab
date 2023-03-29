#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle(void);
    rectangle(int a, int b);

    void getdata(void);
    void setdata(int a, int b);
    int getarea(void);
};

int main()
{
    rectangle obj1;
    obj1.getdata();
    obj1.setdata(245, 20);
    obj1.getdata();

    cout << "area of obj 1 = " << obj1.getarea() << endl;

    rectangle obj2(30, 25);
    obj2.getdata();
    cout << "area of obj 2 = " << obj2.getarea() << endl;

    return 0;
}

rectangle::rectangle(void)
{
    length = 0;
    breadth = 0;
}

rectangle::rectangle(int a, int b)
{
    length = a;
    breadth = b;
}

void rectangle::getdata(void)
{
    cout << "length : " << length << "\n";
    cout << "breadth : " << breadth << "\n";
}

void rectangle::setdata(int a, int b)
{
    length = a;
    breadth = b;
}

int rectangle::getarea(void)
{
    return (length * breadth);
}