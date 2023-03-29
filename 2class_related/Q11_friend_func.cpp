#include <iostream>
using namespace std;

// Declare class B
class B;

// Declare class A
class A
{
private:
    int numA;

public:
    A() : numA(0) {}
    void getNumA()
    {
        cout << "Enter value of numA: ";
        cin >> numA;
    }
    // Declare friend function
    friend int max(A, B);
};

// Declare class B
class B
{
private:
    int numB;

public:
    B() : numB(0) {}
    void getNumB()
    {
        cout << "Enter value of numB: ";
        cin >> numB;
    }
    // Declare friend function
    friend int max(A, B);
};

// Define friend function
int max(A objA, B objB)
{
    if (objA.numA==objB.numB)
    {
        cout<<"Both are equal"<<endl;
    }
    else
    {
        cout<< ((objA.numA > objB.numB) ? objA.numA : objB.numB)<<" is greater !!";

    }
}

// Main function
int main()
{
    A objA;
    B objB;
    objA.getNumA();
    objB.getNumB();
    max(objA, objB);
    return 0;
}
