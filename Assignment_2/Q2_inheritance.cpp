#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void aboutAnimal()
    {
        cout << "This is an animal." << endl;
    }
};

// Hierarchical Inheritance: Derived classes from the base class "Animal"
class Mammal : public virtual Animal
{
public:
    void aboutMammal()
    {
        cout << "This is a mammal." << endl;
    }
};

class Reptile : public virtual Animal
{
public:
    void aboutReptile()
    {
        cout << "This is a reptile." << endl;
    }
};

// Hybrid Inheritance: Derived class from multiple base classes
class Platypus : public Mammal, public Reptile
{
public:
    void aboutPlatypus()
    {
        cout << "A platypus is a unique animal that combines features of both mammals and reptiles." << endl;
    }
};

int main()
{
    Platypus obj;

    obj.aboutAnimal();   // Function inherited from the "Animal" class
    obj.aboutMammal();   // Function inherited from the "Mammal" class
    obj.aboutReptile();  // Function inherited from the "Reptile" class
    obj.aboutPlatypus(); // Member function of the "Platypus" class

    return 0;
}
