#include <iostream>
using namespace std;

// Class to illustrate basic to class type conversion
class MyClass
{
public:
    int value;
    // Constructor to perform basic to class type conversion
    MyClass(int x)
    {
        value = x;
    }
};

int main()
{
    int intValue = 10;
    float floatValue = 3.5;
    // Basic to basic type conversion (Implicit)
    float sumImplicit = intValue + floatValue;
    cout << "Implicit type conversion" << endl;
    cout << "intValue + floatValue = " << sumImplicit << endl;

    // Basic to basic type conversion (Explicit)
    float sumExplicit = intValue + static_cast<int>(floatValue);
    cout << "Explicit type conversion" << endl;
    cout << "intValue + static_cast<int>(floatValue) = " << sumExplicit << endl;

    // Basic to class type conversion
    MyClass obj(intValue);
    cout << "Basic to class type conversion" << endl;
    cout << "MyClass obj(intValue) = " << obj.value << endl;

    return 0;
}