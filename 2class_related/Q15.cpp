#include <iostream>
using namespace std;

class NaturalNumbers
{
public:
    void printNumbers(int n)
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << i << " ";
        }
    }
};

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    NaturalNumbers obj;
    cout << "Natural numbers up to " << n << " are: ";
    obj.printNumbers(n);
    cout << endl;

    return 0;
}