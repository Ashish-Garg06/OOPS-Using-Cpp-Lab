#include <iostream>
using namespace std;
class demo
{
    int a, b;

public:
    void get()
    {
        cout << "a = " << a << "\nb= " << b << endl;
    }
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    demo obj1;
    obj1.set(55, 98);
    obj1.get();
    demo obj2 = obj1;
    obj2.get();
    return 0;
}
