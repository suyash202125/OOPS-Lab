#include<iostream>
using namespace std;

//Base class
class A{
    public:
        int length;
        void len() {
            cout << "Length: ";
            cin >> length;//Length is enter by user
        }
};

//Inherits property of class A as well acts as base class for D
class B : public A{
    public:
        int breadth, area;
        void l_into_b() {
            len();
            cout << "Breadth: ";
            cin >> breadth;//Breadth is enter by user
            area = breadth * length;//c stores value of lenght * Breadth i.e. (l*b).
        }
};

//Another class C which will be base class for D
class C
{
    public:
        int height;
        void hei(){
            cout << "Height: ";
            cin >> height;//Height is enter by user
        }
};

class D : public B, public C  //Hybrid Inheritance Level
{
    public:
        int res;
        void Volume(){
            l_into_b();
            hei();
            res = height * area;
            cout << "Volume is (l*b*h): " << res << endl;
        }
        void Area(){
            l_into_b();
            cout << "Area is (l*b): " << area << endl;
        }
};

int main(){
    D d1;//object declaration of class D
    cout << "\nEnter dimensions of object to get Area:\n";
    d1.Area();//calling the Area function of class D
    cout << "\nEnter dimensions of object to get Volume:\n";
    d1.Volume();//calling the Volume function of class D

    return 0;
}