#include <iostream>

using namespace std;

class Car
{
public:
    string model;
    string brand;
    int year;

    Car(string brand, string model, int year){
        Car::brand = brand;
        Car::model = model;
        Car::year = year;
    }


}; 

int main()
{
    Car car("BMW", "i30", 2003);
    
    cout << car.brand << "--" << car.model << "--" << car.year;
    return 0;
}