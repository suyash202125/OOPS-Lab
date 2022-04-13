#include <iostream>
using namespace std;

//creating a class name ACCOUNT
class ACCOUNT{
    private:
        double account_bal;
    public:
        //constructor for initializing the account balance.
        ACCOUNT(double amount){
            account_bal = amount;
        }

        //depositing money
        void deposit(double money_deposited){
            account_bal = account_bal + money_deposited;
            cout << "After depositing " << money_deposited << " rupees, the account balance is now " 
            << account_bal << " rupees." << endl;
        }

        //withdrawing money if there is sufficient balance in the account.
        void withdraw(double money_withdrawn){
            if(money_withdrawn < account_bal){
                account_bal = account_bal - money_withdrawn;
                cout << "After withdrawing " << money_withdrawn << " rupees, the account balance is now " 
                << account_bal << " rupees." << endl;
            }
            else{
                cout << "INSUFFICIENT AMOUNT!" << endl;
            }
        }

        //calculating interest over one year saving in the account.
        void interest(double total_amount_after_one_year){
            double interest_rate;
            interest_rate = ((total_amount_after_one_year - account_bal) / account_bal);
            cout << "The account has the interest rate of " << interest_rate << " percent per annum." << endl;
        }

};

int main(){

    ACCOUNT a(5000.00);//object declaration
    a.deposit(4000.00);//depositing
    a.withdraw(6000.00);//withdrawing
    a.interest(10000.00);//calculating interest

    return 0;
}