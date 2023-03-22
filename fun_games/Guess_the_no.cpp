#include <iostream>
using namespace std;

void num_guess_binary_search(int range_low,int range_high,int num_attempts=0)
{
    int low = range_low, high = range_high, mid;

    // Initialize the binary search algorithm
    int guess = -1;
    int attempts = num_attempts;
    while (guess != mid)
    {
        // Compute the mid-point of the range
        mid = (low + high) / 2;

        // Make a guess
        guess = mid;
        attempts++;

        // Ask the user for feedback
        char response;
        cout << "Is the number " << guess << "? (y/n): ";
        cin >> response;

        // Update the range based on the user's answer
        if (response == 'y')
        {
            cout << "Great! I guessed the number in " << attempts << " attempts.\n";
            break;
        }
        else if (response == 'n')
        {
            char direction;
            cout << "Is the number higher or lower than " << guess << " ? (h/l): ";
            cin >> direction;

            if (direction == 'h')
            {
                // guess Becomes the new low in recursive call
                num_guess_binary_search(guess,high,attempts);
            }
            else if (direction == 'l')
            {
                // guess becomes new high
                num_guess_binary_search(low,guess,attempts);
            }
        }
        else
        {
            cout << "Invalid Input Enter Again !!!" << endl;
            continue;
        }
    }
}
int main()
{
    cout << "Welcome to the Guess the Number game!\n";
    cout << "Think of a number between 1 and 100.\n";

    num_guess_binary_search(1,100);
}
