#include <iostream>
using namespace std;

// Parent class (base class)
class Parent
{
public:
    void print_message()
    {
        cout << "This is the parent class" << endl;
    }
};

// Child class (derived class)
class Child : public Parent
{
public:
    // Function with the same name as the parent class
    void print_message()
    {
        cout << "This is the child class" << endl;
    }

    // Function to access parent class's version of print_message
    void print_parent_message()
    {
        // Using the base class's name to access the parent class's function
        Parent::print_message();
    }
};

int main()
{
    Child obj;
    obj.print_message();        // Calls the child class's function
    obj.print_parent_message(); // Calls the parent class's function through the child function
    return 0;
}