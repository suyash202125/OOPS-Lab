//Program to overload binary operator
#include <iostream>
using namespace std;

//created a class named complex to show binary operator overloading
class complex 
{
    private:
        int real, imaginary;//data members
    public:
        //taking input values for an instance of an object
        void input(){
            cout << "Enter the value of the real part of the Complex Number: "; 
            cin >> real;
            cout << "Enter the value of the imaginary part of the Complex Number: "; 
            cin >> imaginary;
        }
    
        complex operator+(complex ob)// overaloded operator function +
        {
            complex complex_num;
            complex_num.real = real + ob.real;
            complex_num.imaginary = imaginary + ob.imaginary;
            return (complex_num);
        }
    
        complex operator-(complex ob)// overaloded operator function -
        {
            complex complex_num;
            complex_num.real = real - ob.real;
            complex_num.imaginary = imaginary - ob.imaginary;
            return (complex_num);
        }

        //outpting values to the terminal
        void output(){
            cout << real << " + " << imaginary << "i" << endl;
        }
};

int main() 
{
    complex obj1, obj2, result;// object declaration of class complex

    cout << "\n===============================For first complex number===============================" << endl;
    obj1.input();//for taking input for the data members of the obj1
    cout << "\n===============================For second complex number===============================" << endl;
    obj2.input();//for taking input for the data members of the obj2
    
  
    cout << "\n======================================Input Values======================================\n";
    cout << "First complex number: ";
    obj1.output();//outputing values of obj1
    cout << "second complex number: ";
    obj2.output();//outputing values of obj2

    cout << "\n============================================Results============================================" << endl;
    result = obj1 + obj2;//calculating result of + overloaded operator
    cout << "Result for + operator: ";
    result.output();//outputing the calculated result of + overloaded operator

    
    result = obj1 - obj2;//calculating result of - overloaded operator
    cout << "Result for - operator: ";
    result.output();//outputing the calculated result of + overloaded operator
    
    return 0;
}