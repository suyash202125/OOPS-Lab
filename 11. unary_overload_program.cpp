//Program to overload unary operator.
#include <iostream>
using namespace std;

//created a class named UNARY
class UNARY{
    private:
        int key;//private data member
    public:
        //default constructor
        UNARY(){
            key = 0;
        }

        //parameterized constructor
        UNARY(int &num){
            key = num;
        }

        //display function
        void display(){
            cout << key << endl;
        }

        //overloaded unary increment operator
        UNARY operator++ (){
            ++key;
            
            return key;
        }

        //overloaded unary decrement operator
        UNARY operator-- (){
            --key;
            
            return key;
        }

        //overloaded unary negation operator
        UNARY operator- (){
            key = -key;        
            
            return key;
        }
};

int main()
{
    int num;//variable declaration
    cout << "Enter the number you want to change: ";
    cin >> num;//input to the variable
    UNARY value1(num), value2(num), value3(num);//object declaration with argument passing
    
    ++value1;//implementing increment
    --value2;//implementing decrement
    -value3;//implementing negation
    
    cout << endl;
    cout << "After increment the number will be: "; 
    value1.display();//display to the console call for value1 object
    cout << endl;
    cout << "After decrement the number will be: "; 
    value2.display();//display to the console call for value2 object
    cout << endl;
    cout << "After negation the number will be: ";
    value3.display();//display to the console call for value3 object
    cout << endl;

    return 0;
}