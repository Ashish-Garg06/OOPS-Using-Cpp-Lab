#include <iostream>
using namespace std;

class Sum; // forward declaration

class Number
{
private:
    int num;

public:
    void get_num()
    {
        cout << "Enter the value of n :";
        cin >> num;
    }
    friend int sum_of_nums(Number, Sum);
};

class Sum
{
private:
    int sum;

public:
    Sum()
    {
        sum = 0;
    }
    friend int sum_of_nums(Number, Sum);
};

// Definition of friend function
int sum_of_nums(Number objn, Sum objs)
{
    // Using Guass summation for natural number formula
    objs.sum = ((objn.num * (objn.num + 1)) / 2);
    cout << "Sum of natural numbers till n: " << objs.sum << endl;
}

int main()
{
    Number n;
    Sum s;
    n.get_num();
    sum_of_nums(n, s);
    return 0;
}