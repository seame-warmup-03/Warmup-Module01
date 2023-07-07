# include   <iostream>
using       namespace std;

class       Vehicle
{
protected:
    int     make;
    int     model;
    int     year;

public:
    Vehicle(
        int make,
        int model,
        int year)
        :   make(make),
            model(model),
            year(year)
    {}

    virtual void drive() = 0;
};

class       Car :
            public virtual Vehicle
{
public:
    Car(
        int make,
        int model,
        int year)
        :   Vehicle(make, model, year)
    {}

    void    drive() override
    {
        cout    << "Driving " << make << " " << model << " " << year << " edition" << endl;
    }
};

class       Drone :
            public virtual Vehicle
{
public:
    Drone(
        int make,
        int model,
        int year)
        :   Vehicle(make, model, year)
    {}

    void    drive() override
    {
        cout    << "Flying " << make << " " << model << " " << year << " edition" << endl;
    }
};

class       UAM :
            public Car,
            public Drone
{
public:
    UAM(
        int make,
        int model,
        int year)
        :   Vehicle(make, model, year),
            Car(make, model, year),
            Drone(make, model, year)
    {}

    void    drive() override
    {
        cout    << "Using UAM: " << make << " " << model << " " << year << " edition" << endl;
    }
};


int         main(void)
{
    Car     seame(1, 2, 3);
    Drone   droneX(4, 5, 6);
    UAM     uam(7, 8, 9);

    Vehicle* vehicles[] = {&seame, &droneX};

    for (const auto vehicle : vehicles)
        vehicle->drive();
    
    uam.drive();

    return 0;
}