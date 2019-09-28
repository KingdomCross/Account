/**
 * Alex Chheng
 * CECS 282 Lab 2 Problem 1-3
 */
#include <iostream>
#include "Account.h"
#include "Bank.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Account my_account(100);     // Set up my account with $100
    Account my_saving(10000);
    my_account.deposit(50);
    my_account.withdraw(175);   // Penalty of $20 will apply
    my_account.withdraw(25);
    cout << "Account balance: " << my_account.get_balance() << "\n";

    my_account.withdraw(my_account.get_balance());  // withdraw all
    cout << "Account balance: " << my_account.get_balance() << "\n";

    bool AIR = true;
    int select = 0;
    double interest = 0.06;
    double n = 10000.00;

    while (AIR){
        cout << "Enter 0 to exit or 1\n";
        cin >> select;
        if (select == 0){
            AIR = false;
        }
        else if (select == 1){
            //menu
            cout << "Enter current balance: \n";
            cin >> n;
            my_account.set_balance(n);
            cout << "Enter annual interest percent: \n";
            cin >> interest;
            cout << "\n";

            cout <<"Number of months: " << my_saving.monthly(my_saving.get_balance(), interest) << "\n";
        }
        else{
            cout << "Invalid input\n";
        }
    }

    cout << "\n";
    Bank my_bank;
    cout << "Inital bank balances: \n";
    my_bank.print_balances(); /* set up empty accounts */

    cout << "Adding some money to accounts: \n";
    my_bank.deposit(1000, "S"); /* deposit $1000 to savings */
    my_bank.deposit(2000, "C"); /* deposit $2000 to checking */
    my_bank.print_balances();

    cout << "Taking out $1500 from checking,and moving $200 from";
    cout << " savings to checking.\n";
    my_bank.withdraw(1500, "C"); /* withdraw $1500 from checking */
    my_bank.transfer(200, "S"); /* transfer $200 from savings */
    my_bank.print_balances();

    cout << "Trying to transfer $900 from Checking.\n";
    my_bank.transfer(900,"C");
    my_bank.print_balances();

    cout << "trying to transfer $900 from Savings.\n";
    my_bank.transfer(900,"S");
    my_bank.print_balances();

    return 0;
}