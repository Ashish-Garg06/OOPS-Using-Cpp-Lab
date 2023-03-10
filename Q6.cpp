#include <iostream>
using namespace std;
// function Prototype
void pattern_reverse_a_ab_abc_generator(int n, char c);
int main()
{
    int n;
    char c;

    cout << "Enter the number of lines to print the pattern (up to n lines): ";
    cin >> n;

    cout << "Enter the character to start the pattern with : ";
    cin >> c;

    cout << "Be Warned!! High values of n combined with High initial value of char will give garbage response \nThis is due to the ascii chart config and not due to any fault in the code \nBasically GIGO(Garbage in Garbage out) problem \n";
    // calling function
    pattern_reverse_a_ab_abc_generator(n, c);
    return 0;
}

void pattern_reverse_a_ab_abc_generator(int n, char c)
{
    //  This loop will run n times, where n is the number of lines to print
    for (int i = 1; i <= n; i++)
    {
        //  This variable ascii_val will be used to print the letter through the loop
        // int() is used as a function to extract the ascii value from the char c
        // its placement inside the first line of outer loop ensures that it is initialised each iteration
        int ascii_val = int(c);

        //  This loop will run n times for first line
        // n-1 times for second line and so on till it reaches last line
        // when it will run for 1 time
        for (int j = n; j >= (i); j--)
        {
            //  Print the current value of ascii_val (converted to char value by using char() as function) and a space after it
            cout << char(ascii_val) << " ";

            //  Increase ascii_val by 1 each time this loop runs effectively increasing the ascii value
            // hence on repeat iteration the char with ascii value greater by 1 will be printed
            ascii_val++;
        }

        //  Move to a new line after each line is printed
        cout << "\n";
    }
}