#include <iostream>
using namespace std;
class Destdemo
{
    int *t;

public:
    Destdemo()
    {
        t = new int;
    }
    void accept()
    {
        cout << "\n Enter Number : ";
        cin >> *t;
    }
    void display()
    {
        cout << "\n Entered Number is : " << *t;
    }
    ~Destdemo() // Automatically called after the end of the execution.
    {
        delete t;
        cout << "\n\n Destroyed ";
    }
};
int main()
{
    Destdemo td;
    td.accept();
    td.display();
    return 0;
}