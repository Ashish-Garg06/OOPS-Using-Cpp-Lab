#include <iostream>
using namespace std;

int main()
{
    // Declare the dimensions and the 2D array (3x3 for this example)
    const int ROWS = 3;
    const int COLS = 3;
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Declare the array to store row-wise sums
    int rowSum[ROWS];

    // Calculate the row-wise sum for each row in the 2D array
    for (int i = 0; i < ROWS; i++)
    {
        rowSum[i] = 0; // Initialize each row sum to 0
        for (int j = 0; j < COLS; j++)
        {
            rowSum[i] += arr[i][j]; // Accumulate the sum of each element in the current row
        }
    }

    // Display the row-wise sums
    cout << "Row-wise sums:" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        cout << "Sum of row " << (i + 1) << ": " << rowSum[i] << endl;
    }

    return 0;
}