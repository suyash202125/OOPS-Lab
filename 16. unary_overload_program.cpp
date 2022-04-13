#include <iostream>

using namespace std;


class UNARY{
    private:
        int key;
    public:
        UNARY(){
            key = 0;
        }
        UNARY(int &num){
            key = num;
        }
        void display(){
            cout << key << endl;
        }
        UNARY operator++ (){
            ++key;
            
            return key;
        }
        UNARY operator-- (){
            --key;
            
            return key;
        }
        UNARY operator- (){
            key = -key;        
            
            return key;
        }
};

int main()
{
    int num;
    cout << "Enter the number you want to change: ";
    cin >> num;
    UNARY value1(num), value2(num), value3(num);
    
    ++value1;
    --value2;
    -value3;
    
    cout << endl;
    cout << "After increment the number will be: "; 
    value1.display();
    cout << endl;
    cout << "After decrement the number will be: "; 
    value2.display();
    cout << endl;
    cout << "After negation the number will be: ";
    value3.display();
    cout << endl;

    return 0;
}