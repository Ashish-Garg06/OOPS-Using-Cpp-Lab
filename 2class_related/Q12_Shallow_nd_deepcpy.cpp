#include <iostream>
using namespace std;

class MyClass
{
private:
    int *ptr;

public:
    // Constructor
    MyClass(int value)
    {
        ptr = new int;
        *ptr = value;
    }

    // Deep copy constructor
    MyClass(const MyClass &obj, bool deep = false)
    {
        if (deep)
        {
            ptr = new int;
            *ptr = *(obj.ptr);
        }
        else
        {
            ptr = obj.ptr;
        }
    }

    // Destructor
    ~MyClass()
    {
        delete ptr;
    }

    // Getter
    int getValue()
    {
        return *ptr;
    }

    // Setter
    void setValue(int value)
    {
        *ptr = value;
    }
};

int main()
{
    // Create an instance of MyClass with value 42
    MyClass obj1(42);

    // Create a shallow copy of obj1
    MyClass obj2 = obj1;

    // Modify obj1
    obj1.setValue(24);

    // Print both objects to demonstrate that they share the same memory
    cout << "Shallow copy: " << obj1.getValue() << endl;
    cout << "Shallow copy: " << obj2.getValue() << endl;

    // Create a deep copy of obj1
    MyClass obj3(obj1, true);

    // Modify obj1 again
    obj1.setValue(12);

    // Print both objects to demonstrate that they have different memory
    cout << "Deep copy: " << obj1.getValue() << endl;
    cout << "Deep copy: " << obj3.getValue() << endl;

    return 0;
}