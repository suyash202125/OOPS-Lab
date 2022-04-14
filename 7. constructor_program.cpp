#include <iostream>
using namespace std;

//created a class RECTANLE to calculate the area of a given rectangle
class RECTANGLE{
    private:
        double length;
        double breadth;
    public:
        //default constructor
        RECTANGLE(){
            cout << "===========================================================================" << endl;
            cout << "using default constructor" << endl;
            length = 0;
            breadth = 0;
        }
        //parameterized constructor
        RECTANGLE(double l, double b){
            cout << "===========================================================================" << endl;
            cout << "using parameterized constructor" << endl;
            length = l;
            breadth = b;
        }
        //copy constructor
        RECTANGLE(const RECTANGLE &rect){
            cout << "===========================================================================" << endl;
            cout << "usnig copy constructor" << endl;
            length = rect.length;
            breadth = rect.breadth;
        }
        //another parameterized constructor to overload the constructor
        RECTANGLE(double side){
            cout << "===========================================================================" << endl;
            cout << "overloading constructor" << endl;
            length = side;
            breadth = side;
        }

        //member function to calculate the area of the rectangle
        void display_area(){
            cout << "The area of rectangle is: " << length*breadth << endl;
        }
};

int main(){

    double length_of_rectangle, breadth_of_rectangle;

    cout << "Enter the length of the rectangle: ";
    cin >> length_of_rectangle;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth_of_rectangle;

    RECTANGLE r1;//r1 is the object of RECTANLE class without passing any argument
    r1.display_area();//it will use default constructor for the calculation of the area of rectangle

    RECTANGLE r2(length_of_rectangle, breadth_of_rectangle);//r2 object, passing length and breadth
    r2.display_area();// it will use parametrized constructor for the calculation of area of rectangle

    RECTANGLE r3(r2);//r3 object, passing another object r2 as an argument to use copy constructor
    r3.display_area();//it will use copy constructor for the calculation of area of rectangle

    RECTANGLE r4(length_of_rectangle);//r4 object to show constructor overloading,
                                      //passing single argument, when rectangle becomes square
    r4.display_area();//it will use overloaded constructor to calculate the area of the rectangle
    return 0;
}