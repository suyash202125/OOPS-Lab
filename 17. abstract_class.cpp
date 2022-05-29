#include <iostream>
using namespace std;

//created an abstract class SHAPE that will be used as base class
class SHAPE{
    public:
        virtual void no_of_sides() = 0;//pure virtual function declaration
};

//class TRAPEZOID will be used as derived class;
class TRAPEZOID : public SHAPE{
    public:
        void no_of_sides(){//function definition for TRAPEZOID
            cout << "\nTrapezoid has 4 sides." << endl;
        }
};

//class TRIANGLE will be used as derived class;
class TRIANGLE : public SHAPE{
    public:
        void no_of_sides(){//function definition for TRIANGLE
            cout << "Triangle has 3 sides." << endl;
        }
};

//class HEXAGON will be used as derived class;
class HEXAGON : public SHAPE{
    public:
        void no_of_sides(){//function definition for HEXAGON
            cout << "Hexagon has 6 sides." << endl;
        }
};

int main(){
    
    //object of each derived class declared
    TRAPEZOID trapezoid;
    TRIANGLE triangle;
    HEXAGON hexagon;

    //function called for each object
    //it will produce number of sides for each shape
    trapezoid.no_of_sides();
    triangle.no_of_sides();
    hexagon.no_of_sides();

    return 0;
}