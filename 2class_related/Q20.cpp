#include <iostream>
using namespace std;
class Integer
{
public:
    int value;

    // Constructor
    Integer(int v = 0) : value(v) {}

    // Overloaded prefix (pre) increment operator ++
    Integer &operator++()
    {
        value++;
        return *this;
    }

    // Overloaded prefix (pre) decrement operator --
    Integer &operator--()
    {
        value--;
        return *this;
    }

    // Overloaded postfix (post) increment operator ++ (int)
    Integer operator++(int)
    {
        Integer temp = *this;
        value++;
        return temp;
    }

    // Overloaded postfix (post) decrement operator -- (int)
    Integer operator--(int)
    {
        Integer temp = *this;
        value--;
        return temp;
    }

    // Helper function to print the value
    void print()
    {
        cout << "Integer value: " << value << endl;
    }
};
int main()
{
    Integer num(5);
    cout << "Initial value: ";
    num.print();

    // Pre-increment
    ++num;
    cout << "After pre-increment: ";
    num.print();

    // Pre-decrement
    --num;
    cout << "After pre-decrement: ";
    num.print();

    // Post-increment
    num++;
    cout << "After post-increment: ";
    num.print();

    // Post-decrement
    num--;
    cout << "After post-decrement: ";
    num.print();

    return 0;
}