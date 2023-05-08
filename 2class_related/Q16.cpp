#include <iostream>
using namespace std;

// Function overloading definition for addition of integers
int addition(int a, int b)
{
    return a + b;
}

// Function overloading definition for multiplication of integers
int multiplication(int a, int b)
{
    return a * b;
}

// Function overloading definition for addition of doubles
double addition(double a, double b)
{
    return a + b;
}

// Function overloading definition for multiplication of doubles
double multiplication(double a, double b)
{
    return a * b;
}

// Main function
int main()
{
    int int_a, int_b;
    double double_a, double_b;

    // Read input for integer values
    cout << "Enter two integer values: ";
    cin >> int_a >> int_b;

    // Read input for double values
    cout << "Enter two double values: ";
    cin >> double_a >> double_b;

    // Perform addition and multiplication for integer values
    cout << "Addition of integers: " << addition(int_a, int_b) << endl;
    cout << "Multiplication of integers: " << multiplication(int_a, int_b) << endl;

    // Perform addition and multiplication for double values
    cout << "Addition of doubles: " << addition(double_a, double_b) << endl;
    cout << "Multiplication of doubles: " << multiplication(double_a, double_b) << endl;

    return 0;
}