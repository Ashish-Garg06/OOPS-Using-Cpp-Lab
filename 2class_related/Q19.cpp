#include <iostream>
using namespace std;

class Operations
{
public:
    // Declare constructor and data members
    int num;
    Operations(int n) : num(n) {}

    // Overloaded + operator for addition
    Operations operator+(const Operations &other)
    {
        return Operations(num + other.num);
    }

    // Overloaded - operator for subtraction
    Operations operator-(const Operations &other)
    {
        return Operations(num - other.num);
    }

    // Overloaded * operator for multiplication
    Operations operator*(const Operations &other)
    {
        return Operations(num * other.num);
    }

    // Overloaded / operator for division
    Operations operator/(const Operations &other)
    {
        if (other.num == 0)
        {
            cout << "Division by zero is not allowed." << endl;
            return Operations(0);
        }
        return Operations(num / other.num);
    }
};

int main()
{
    Operations op1(10), op2(5);

    // Addition
    Operations result = op1 + op2;
    cout << "Addition: " << result.num << endl;

    // Subtraction
    result = op1 - op2;
    cout << "Subtraction: " << result.num << endl;

    // Multiplication
    result = op1 * op2;
    cout << "Multiplication: " << result.num << endl;

    // Division
    result = op1 / op2;
    cout << "Division: " << result.num << endl;

    return 0;
}