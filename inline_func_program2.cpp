#include <iostream>
using namespace std;

inline int func(int a, int b){
    return a+b;
}

int main(){

    int num1, num2, result;
    
    cout << "Enter the value of first number: ";
    cin >> num1;

    cout << "Enter the value of second number: ";
    cin >> num2;

    result = func(num1, num2);

    cout << "The result of summation of the first and second number is: " << result << endl;

    return 0;
}