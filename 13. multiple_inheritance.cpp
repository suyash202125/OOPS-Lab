#include <iostream>  
using namespace std;  
  
// created add class to perform addition
class ADD{  
    public:  
        int first_num = 20;  
        int second_num = 30;  
        void sum(){  
            cout << "\nThe sum of " << first_num << " and " << second_num << " is " <<first_num+second_num << endl;  
        }  
};  
  
// created Mul class to perform multiplication
class MUL{  
    public:  
        int first_num = 20;  
        int second_num = 30;  
        void mul()  
        {  
            cout << "The Multiplication of " << first_num << " and " << second_num << " is " << first_num * second_num << endl;  
        }  
};  
  
// create Susecond_num class to perform subtraction
class SUB{  
    public:  
        int first_num = 50;  
        int second_num = 30;  
        void sub(){  
            cout << "The Subtraction of " << first_num << " and " << second_num << " is " << first_num - second_num << endl;  
        }  
};  
  
// create Div class to perform division
class DIV{ 
    public:  
        int first_num = 150;  
        int second_num = 30;  
        void div()  
        {  
            cout << "The Division of " << first_num << " and " << second_num << " is " << first_num / second_num << endl;  
        }  
};  
  
// create a MOD class to derive the member functions of all base classes  
class MOD: public ADD, public MUL, public SUB, public DIV{  
    public:  
        int first_num = 12;  
        int second_num = 5;  
        void mod(){ 
            cout << "The Modulus of " << first_num << " and " <<second_num << " is " << first_num % second_num << endl;  
        }  
};  
  
int main (){  
    // created an object of the MOD class  
    MOD m;  
    m.mod(); // call derive class member function    
    // call all member function of class add, Div, Susecond_num and Mul  
    m.sum();  
    m.mul();  
    m.div();  
    m.sub();  
}