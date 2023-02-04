#include <iostream>
using namespace std;
// function Prototype
void pattern_hollow_square_generator(int n);
int main()
{
    int n;
    cout << "Enter the side length of the square: ";
    cin >> n;

    // calling function
    pattern_hollow_square_generator(n);

    return 0;
}
void pattern_hollow_square_generator(int n)
{
    // Print the top row
    // loop runs for n times to print stars n time in top row
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << "\n";

    // Print the middle rows
    // loops runs for n-2 times
    // this is because top and bottom row use different logic to print stars
    // top + bottom =2 rows hence the loop runs for n-2 times
    for (int i = 0; i < n - 2; i++)
    {
        cout << "* ";
        // loop runs for n- 2 times
        // reasoning same as outer loop but here first and last column differ
        for (int j = 0; j < n - 2; j++)
        {
            // for printing spaces in the middle columns
            cout << "  ";
        }
        cout << "*"
             << "\n";
    }

    // Print the bottom row
    // loop runs for n times to print stars n time in bottom row
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << "\n";
}