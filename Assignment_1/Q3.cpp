#include <iostream>
using namespace std;

class MyClass
{
public:
    void memberFunction()
    {
        cout << "This is a member function call." << endl;
    }
};

int main()
{
    MyClass myObj;

    // Invoke member function inside the class
    myObj.memberFunction();

    // Invoke member function outside the class
    MyClass *myPtr = &myObj;
    myPtr->memberFunction();

    return 0;
}