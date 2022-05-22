#include <iostream>
using namespace std;

//created a time class
class TIME{
    private:
        //private data members to store time in hours and minutes
        int hours;
        int minutes;
    public:
        //using parameterized constructor to store time
        TIME(int h, int m){
            hours = h;
            minutes = m;
        }
        //display function to display time to the terminal
        void display(){
            cout << hours << " h " << minutes << " m" << endl;
        }
        //friend function prototype for adding two time objects
        friend TIME add(TIME t1, TIME t2);
};

//funtion for adding two time object t1 and t2
TIME add(TIME t1, TIME t2){
    //if sum of minutes of two objects > 60, divide the sum by 60 to get the hours
    //and take modulus(%) of the sum by 60 to get the minutes
    t1.hours = t1.hours + t2.hours + (t1.minutes + t2.minutes) / 60;
    t1.minutes = (t1.minutes + t2.minutes) % 60;

    return t1;
}

int main(){

    TIME mytime1(5, 34);//TIME object-1
    cout << endl << "TIME-1: ";
    mytime1.display();//displaying TIME object-1
    TIME mytime2(7, 43);//TIME object-2
    cout << "TIME-2: ";
    mytime2.display();//displaying TIME object-2

    //adding two TIME objects and storing in another TIME object res_time
    TIME res_time = add(mytime1, mytime2);
    cout << endl << "TIME-1 + TIME-2: ";
    res_time.display();//displaying the added TIME objects

    return 0;
}