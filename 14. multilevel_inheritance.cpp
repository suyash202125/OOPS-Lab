#include <iostream>
using namespace std;

//created a class Vehicle which will act as a base class for upcoming classes.
class Vehicle{
   public:
        void vehicle(){
            cout<<"I am a vehicle.\n";
        }
};

//created a derived class which inherit properties from the class Vehicle and
//also will act as a base class for upcoming classes.
class FourWheeler : public Vehicle{
   public:
        void fourWheeler(){
            cout<<"I am a four wheeler.\n";
        }
};

//created a class Car which inherit properties from the class FourWheeler and Vehicle
//it will also act a base class for upcoming classes.
class Car : public FourWheeler{
   public:
        void car(){
            cout<<"I am a car.\n";
        }
};

//created a class Honda which inherit properties from the classes Car, FourWheeler and Vehicle
class Honda : public Car{
    public:
        void honda(){
            cout << "\nI am Honda City.\n";
        }
};

int main(){
    
    Honda obj;//object declaration of class Honda.
    obj.honda();//calling the honda function inside the class Honda.
    //calling all the member function of classes Car, FourWheeler and Vehicle.
    obj.car();
    obj.fourWheeler();
    obj.vehicle();

    return 0;
}