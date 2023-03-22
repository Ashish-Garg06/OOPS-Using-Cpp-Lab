#include <iostream>
#include <cmath>
using namespace std;

void num_guess_binary_search(long long range_low,long long range_high,long long usr_inp, int num_attempts=0)
{
    long long low = range_low, high = range_high,answer=usr_inp, mid;

    // Initialize the binary search algorithm
    long long guess = -1;
    int attempts = num_attempts;
    while (guess != mid)
    {
        // Compute the mid-point of the range
        mid = (low + high) / 2;

        // Make a guess
        guess = mid;
        attempts++;

        // Ask the user for feedback
        cout << "Is the number " << guess << "? (y/n): ";

        // Update the range based on the user's answer
        if (guess==answer)
        {
            cout<<" y "<<endl;
            cout << "Great! I guessed the number in " << attempts << " attempts.\n";
            break;
        }
        else if (guess!=answer)
        {
            cout<<" n ";
            char direction;
            cout << "Is the number higher or lower than " << guess << " ? (h/l): ";

            if (answer>guess)
            {
                direction='h';
            }
            else if (answer<guess)
            {
                direction='l';
            }
            
            cout<<direction<<endl;

            if (direction == 'h')
            {
                // guess Becomes the new low in recursive call
                num_guess_binary_search(guess,high,answer,attempts);
            }
            else if (direction == 'l')
            {
                // guess becomes new high
                num_guess_binary_search(low,guess,answer,attempts);
            }
        }
    }
}
int main()
{
    cout << "Welcome to the Guess the Number game!\n";
    cout << "Think of a number between 1 and 10^17.\nEnter the no :";

    long long reply;
    cin>>reply;
    num_guess_binary_search(1,pow(10,18),reply);
}
