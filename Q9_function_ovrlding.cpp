#include <iostream>
using namespace std;

int area (int a);
float area (float b);
int area (int c, int d);

int main()
{
    int side= 34, length=14, breadth=23;
    float radius=12;
    area(side);
    area(radius);
    area(length,breadth);
    return 0;
}

int area (int a)
{
    cout<<"The area of Square is "<<a*a<<endl;
}

float area (float b)
{
    cout<<"The area of Circle is "<<3.14*(b*b)<<endl;
}

int area (int c, int d)
{
    cout<<"The area of Rectangle is "<<c*d<<endl;
}