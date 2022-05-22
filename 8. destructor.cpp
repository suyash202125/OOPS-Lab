//Program to show the concept of destructor in C++//
#include <iostream>
using namespace std;

//created a class named destructor
class destructor{
    private:
        int number;//private data member
    public:
        //parameterized constructor for initializing the data member
        destructor(int num){
            cout << "Constructor invoked" << endl;
            number = num;
        }

        //output function
        void output(){
            cout << "The number is: " << number << endl;
        }
        
        //destructor
        ~destructor(){
            cout << "Destructor executed" << endl;
        };
};

int main(){

    int n; //variable declaration
    cout << "Enter the number of your choice: ";
    cin >> n; //input to variable

    destructor myObj(n); //object declaration
    myObj.output();//output

    return 0;
}