#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
        string make;
        string model;
        int year;

    public:
        Car(){}

        Car(string _make, string _model, int _year)
            : make(_make), model(_model), year(_year)
        {
            cout << "Car: constructor called" << endl;
        }

        Car(Car &object)
            : make(object.make), model(object.model), year(object.year)
        {
            cout << "Car: copy constructor called" << endl;
        }

        void operator=(Car &object)
        {
            make = object.make;
            model = object.model;
            year = object.year;
            cout << "Car: copy assignment operator override called" << endl;
        }

        string makeGetter()
        {
            return make;
        }

        string modelGetter()
        {
            return model;
        }

        int yearGetter()
        {
            return year;
        }

        void makeSetter(string _make)
        {
            make = _make;
        }

        void modelSetter(string _model)
        {
            model = _model;
        }

        void yearSetter(int _year)
        {
            year = _year;
        }

        void drive()
        {
            cout << "Drive! " << make << ' ' << model << ' ' << year << endl;
        }

        ~Car()
        {
            cout << "Car: destructor called" << endl;
        }

};

class SportsCar : public Car
{
    private:
        int topSpeed;

    public:
        SportsCar(){}

        SportsCar(string _make, string _model, int _year, int _topSpeed)
            : Car(_make, _model, _year), topSpeed(_topSpeed)
        {
            cout << "SportsCar: constructor called" << endl;
        }

        SportsCar(SportsCar &object)
        {
            Car(object.makeGetter(), object.modelGetter(), object.yearGetter());
            topSpeed = object.topSpeed;
            cout << "SportsCar: copy constructor called" << endl;
        }

        void operator=(SportsCar &object)
        {
            Car::makeSetter(object.makeGetter());
            Car::modelSetter(object.modelGetter());
            Car::yearSetter(object.yearGetter());
            topSpeed = object.topSpeed;
            cout << "SportsCar: copy assignment operator override called" << endl;
        }

        int topSpeedGetter()
        {
            return topSpeed;
        }

        void topSpeedSetter(int _topSpeed)
        {
            topSpeed = _topSpeed;
        }

        void drive()
        {
            Car::drive();
            cout << "topSpeed: " << topSpeed << endl;
        }

        ~SportsCar()
        {
            cout << "SportsCar: destructor called" << endl;
        }
};

int main()
{
    SportsCar seame("aa", "bb", 2023, 100);
    SportsCar seame2;
    seame2 = seame;
    seame2.drive();
    return 0;
}
