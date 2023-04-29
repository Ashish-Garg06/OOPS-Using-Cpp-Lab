#include <iostream>
using namespace std;

class Vehicle
{
private:
    int speed;

public:
    void set_speed(int s)
    {
        speed = s;
    }

    void show_speed()
    {
        cout << "Speed of the vehicle: " << speed << endl;
    }
};

int main()
{
    Vehicle car;
    car.set_speed(120);

    // Creating a pointer to class which will be used
    Vehicle *vehiclePtr;
    // Assigning the address of the 'car' object to the pointer 'vehiclePtr'
    vehiclePtr = &car;

    // Accessing class members using the pointer to class
    vehiclePtr->show_speed();
    // Changing the speed using the pointer to class
    vehiclePtr->set_speed(150);
    vehiclePtr->show_speed();

    // Creating a class object using 'new'
    Vehicle *bike = new Vehicle();
    // Assigning values and accessing class members using pointer to object
    bike->set_speed(90);
    bike->show_speed();
    // Releasing the memory allocated by 'new'
    delete bike;

    return 0;
}