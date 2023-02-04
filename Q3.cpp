#include <iostream>
using namespace std;
// function Prototype
void pattern_1_12_123generator(int n);
int main()
{
    int n;

    cout << "Enter the number of lines to print the pattern (up to n lines): ";
    cin >> n;
    // function call
    pattern_1_12_123generator(n);

    return 0;
}

void pattern_1_12_123generator(int n)
{
    //  This loop will run n times, where n is the number of lines to print
    for (int i = 1; i <= n; i++)
    {
        //  This variable k will be used to print the numbers
        int k = 1;

        //  This loop will run i times for each line
        for (int j = 0; j < i; j++)
        {
            //  Print the current value of k and a space after it
            cout << k << " ";

            //  Increase k by 1 each time this loop runs
            k++;
        }

        //  Move to a new line after each line is printed
        cout << "\n";
    }
}