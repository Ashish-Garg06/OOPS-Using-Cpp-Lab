#include <iostream>
using namespace std;

class Example
{
private:
    int *data;

public:
    Example(int size)
    {
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
    }

    // Shallow copy constructor
    Example(const Example &other)
    {
        data = other.data;
    }

    // Deep copy constructor
    Example(const Example &other, bool deep)
    {
        int size = sizeof(other.data) / sizeof(*other.data);
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }

    void print()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~Example()
    {
        delete[] data;
        cout << "\n\n Destroyed ";
    }
};

int main()
{
    Example ex1(5);
    ex1.print();

    Example ex2 = ex1; // Shallow copy
    ex2.print();

    Example ex3(ex1, true); // Deep copy
    ex3.print();

    return 0;
}
