#include <iostream>
#include <iomanip>
using namespace std;

//declaring a class power
class Power{
    // public access
    public:
        //function to calculate m raised to n
        double calc_power(double m, int n = 2){
            
            double value = 1;
            for(int i = 0; i  <n; i++){
                value = value*m;
            }

            return value;
        }

};

int main(){

    Power P; //declaring Power object P
    double base, result;//declaring variables of double type
    int exponent;//declaring variable of int type

    //taking input of the base number
    cout << "Enter the base number: ";
    cin >> base;

    //taking input of the exponent number
    cout << "Enter the exponent that will be raised to that base number: ";
    cin >> exponent;

    //Calculating result by passing both the argument for m and n as well
    result = P.calc_power(base, exponent);

    cout << endl;
    //result output upto 3 digits after the decimal digits
    cout << "The result when the argument of exponent is passed: " << fixed << setprecision(3) << result << endl;

    //Calculating result by passing only one argument that is for m only
    //it will return the result by using the default argument for n(where n = 2)
    result = P.calc_power(base);

    cout << endl;
    //result output upto 3 digits after the decimal digits
    cout << "The result when the argument of exponent is not passed: " << fixed << setprecision(3) << result << endl;

    return 0;
}