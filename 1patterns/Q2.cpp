#include <iostream>
using namespace std;

// Function prototype
void printPattern(int n);

int main()
{
    // Declare variable to store the number of lines
    int n;

    // Ask the user for the number of lines
    cout << "Enter the number of lines to print the pattern (up to n lines): ";

    cin >> n;

    // Call the function to print the pattern
    printPattern(n);

    return 0;
}

// Function definition
void printPattern(int n)
{
    // Loop to print the pattern
    for (int i = n; i >= 1; i--)
    {
        // Inner loop to print the spaces before the asterisks
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        // Inner loop to print the asterisks in each line
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        // Move to next line after printing the asterisks
        cout << endl;
    }
}