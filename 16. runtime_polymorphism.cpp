#include <iostream>
using namespace std;
  
//created a base class
class Student_Name{
    public:
        virtual void name_output(){
            cout<< "Aman Srivastava" <<endl;
        }
    
        void name_display(){
            cout<< "Suyash Srivastava" <<endl;
        }
};

//created a derived class
class Branch_Name : public Student_Name{
    public:
        //name_output() is already virtual function in derived class
        //we could also declared as virtual void name_output() explicitly
        void name_output(){
            cout<< "\nComputer Science and Engineering" <<endl;
        }
    
        void name_display(){
            cout<< "\nCSE" <<endl;
        }
};
  
//main function
int main() 
{
    Student_Name *name_ptr;
    Branch_Name B;
    name_ptr = &B;
       
    //virtual function, binded at runtime(Runtime polymorphism)
    name_ptr->name_output(); 
       
    // Non-virtual function, binded at compile time
    name_ptr->name_display(); 
  
    return 0;
}