#include <iostream>
using namespace std;

int main()
{
    class Car
    {
        private:
            char name;
            int speed;
        
        public:
            Car(char a, int b) // constructor
            {
                name = a;
                speed = b;
            }
            
            Car(Car &object) // copy constructor
            {
                name = object.name;
                speed = object.speed;
            }
            
            void operator=(Car object) // copy assignment operator override
            {
                name = object.name;
                speed = object.speed;
            }
            
            void name_setter(char a)
            {
                name = a;
            }
            
            char name_getter()
            {
                return name;
            }
            
            void speed_setter(int a)
            {
                speed = a;
            }
            
            int speed_getter()
            {
                return speed;
            }
            
            ~Car() // destructor
            {
                cout << "goodbye world" << endl;
            }
    };

    Car seame1('A', 10);
    
    cout << "name: " << seame1.name_getter() << endl;
    cout << "speed: " << seame1.speed_getter() << endl;
    
    Car seame2(seame1);
    
    cout << "name: " << seame2.name_getter() << endl;
    cout << "speed: " << seame2.speed_getter() << endl;

    Car seame3 = seame1;

    cout << "name: " << seame3.name_getter() << endl;
    cout << "speed: " << seame3.speed_getter() << endl;
    
    return 0;
}
