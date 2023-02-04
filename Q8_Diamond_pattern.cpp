#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows in first half: ";
    cin >> n;

    // The first loop generates the upper half of the diamond
    // The loop variable i is used to determine the number of stars in each row, which is equal to i itself
    for (int i = 1; i <= n; i++)
    {
        // This inner loop generates the spaces in front of each row
        // it does so by using n - i as the number of spaces. 
        // This is because the number of spaces decreases as the number of stars in each row increases.
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }
        // This inner loop generates the stars in each row and adds space between them
        // it uses the i as no of stars to do so
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // The second loop generates the lower half of the diamond
    // works same like the first loop but uses decrement operator instead
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}