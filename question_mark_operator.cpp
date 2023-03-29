#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int num1 = 25, num2 = 12;
    cout << maximum(num1, num2);
    return 0;
}