#include <iostream>
using namespace std;

class RECTANGLE{
    private:
        double length;
        double breadth;
    public:
        RECTANGLE(){
            cout << "===========================================================================" << endl;
            cout << "using default constructor" << endl;
            length = 0;
            breadth = 0;
        }
        RECTANGLE(double l, double b){
            cout << "===========================================================================" << endl;
            cout << "using parameterized constructor" << endl;
            length = l;
            breadth = b;
        }
        RECTANGLE(const RECTANGLE &rect){
            cout << "===========================================================================" << endl;
            cout << "usnig copy constructor" << endl;
            length = rect.length;
            breadth = rect.breadth;
        }
        RECTANGLE(double side){
            cout << "===========================================================================" << endl;
            cout << "overloading constructor" << endl;
            length = side;
            breadth = side;
        }

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

    RECTANGLE r1;
    r1.display_area();

    RECTANGLE r2(length_of_rectangle, breadth_of_rectangle);
    r2.display_area();

    RECTANGLE r3(r2);
    r3.display_area();

    RECTANGLE r4(length_of_rectangle);
    r4.display_area();

    return 0;
}