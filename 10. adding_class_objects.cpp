#include <iostream>
using namespace std;

class DB;
class DM{
    private:
        int meters;
        int centimeters;
    public:
        DM(int m, int c){
            meters = m;
            centimeters = c;
        }

        void display(){
            cout << meters << " m " << centimeters << " cm";
        }

        friend DM add(DM, DB);
};

class DB{
    private:
        int feets;
        int inches;
    public:
        DB(int f, int i){
            feets = f;
            inches = i;
        }

        void display(){
            cout << feets << " ft " << inches << " in";
        }

        friend DM add(DM, DB);
};

DM add(DM d1, DB d2){

    d1.centimeters = (d1.meters*100 + d1.centimeters) + ((d2.feets*12 + d2.inches)*2.54);

    d1.meters = d1.centimeters / 100;
    d1.centimeters = d1.centimeters - d1.meters*100;
    return d1;
}

int main(){

    DM obj1(4, 15);
    DB obj2(5, 10);

    DM obj3 = add(obj1, obj2);

    cout << endl;
    cout << "Distance 1: ";
    obj1.display();
    cout << endl;
    cout << "Distance-2: ";
    obj2.display();
    cout << endl;

    cout << "Total Distance: ";
    obj3.display();
    cout << endl;
    
    return 0;
}