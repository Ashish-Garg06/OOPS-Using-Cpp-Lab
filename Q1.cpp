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
    for (int i = 1; i <= n; i++)
    {
        // Inner loop to print the asterisks in each line
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Move to next line after printing the asterisks
        cout << endl;
    }
}