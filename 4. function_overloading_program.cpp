#include <iostream>
#include <iomanip>
using namespace std;

class Power{

    public:
        //function for calculating a raised to power b;
        double exponent(double a, int b){
            double ans = 1;
            for(int i = 0; i < b; i++){
                ans = ans*a;
            }

            return ans;
        }

        /*Two function are given below to show the effect of overloading*/

        //calculating power when both the argument are passed
        double calc_power(double m, int n){

            double m_raised_to_n = exponent(m, n);//calling the exponent function to calculate m raised to power n

            return m_raised_to_n;
        }

        //calculating power when only one argument is passed(i.e., base)
        double calc_power(double m){

            int n = 2; // n is declared inside the function

            double m_raised_to_n = exponent(m, n); //calling the exponent function to calculate m raised to power n

            return m_raised_to_n;
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
    //it will return the result by using the overloaded function calc_power
    result = P.calc_power(base);

    cout << endl;
    //result output upto 3 digits after the decimal digits
    cout << "The result when the argument of exponent is not passed(showing overloading effect): " << fixed << setprecision(3) << result << endl;


    return 0;
}