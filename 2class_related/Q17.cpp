#include <iostream>
using namespace std;

class Beta; // Forward declaration of class Beta

class Alpha
{
private:
    int num1;

public:
    // Constructor to initialize num1
    Alpha(int a) : num1(a) {}

    // Friend function declaration to find the largest number
    friend void findLargest(Alpha a, Beta b);
};

class Beta
{
private:
    int num2;

public:
    // Constructor to initialize num2
    Beta(int b) : num2(b) {}

    // Same friend function to find the largest number, declared in Alpha
    friend void findLargest(Alpha a, Beta b);
};

// The friend function implementing the functionality to find the largest number
void findLargest(Alpha a, Beta b)
{
    if (a.num1 > b.num2)
    {
        cout << "The largest number is: " << a.num1 << endl;
    }
    else if (a.num1 < b.num2)
    {
        cout << "The largest number is: " << b.num2 << endl;
    }
    else
    {
        cout << "Both numbers are equal." << endl;
    }
}

// Main function
int main()
{
    int a, b;
    cout << "Enter two integer values: ";
    cin >> a >> b;

    // Create objects of Alpha and Beta classes and initialize them with the input values
    Alpha alpha(a);
    Beta beta(b);

    // Call the friend function with objects of both classes as arguments
    findLargest(alpha, beta);

    return 0;
}